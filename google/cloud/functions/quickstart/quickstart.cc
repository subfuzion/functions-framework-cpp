// Copyright 2020 Google LLC
//
// Licensed under the Apache License, Version 2.0 (the "License");
// you may not use this file except in compliance with the License.
// You may obtain a copy of the License at
//
//     http://www.apache.org/licenses/LICENSE-2.0
//
// Unless required by applicable law or agreed to in writing, software
// distributed under the License is distributed on an "AS IS" BASIS,
// WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
// See the License for the specific language governing permissions and
// limitations under the License.

#include <google/cloud/functions/internal/framework.h>
#include <cstdlib>

namespace {
using ::google::cloud::functions::HttpRequest;
using ::google::cloud::functions::HttpResponse;

HttpResponse HelloWorld(HttpRequest const& request) {
  if (request.target() == "/quit/program/0") std::exit(0);

  HttpResponse response;
  response.set_header("Content-Type", "text/plain");
  response.set_payload("Hello World\n");
  return response;
}

}  // namespace

int main(int argc, char* argv[]) {
  return ::google::cloud::functions_internal::Run(argc, argv, HelloWorld);
}
