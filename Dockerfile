# Copyright 2015 wink saville
#
# licensed under the apache license, version 2.0 (the "license");
# you may not use this file except in compliance with the license.
# you may obtain a copy of the license at
#
#     http://www.apache.org/licenses/license-2.0
#
# unless required by applicable law or agreed to in writing, software
# distributed under the license is distributed on an "as is" basis,
# without warranties or conditions of any kind, either express or implied.
# see the license for the specific language governing permissions and
# limitations under the license.

FROM ubuntu:12.04
MAINTAINER Wink Saville
RUN apt-get update && apt-get install -y \
  automake \
  bison \
  build-essential \
  curl \
  flex \
  gettext \
  git \
  gawk \
  libncurses5-dev \
  python3 \
  python-pip \
  re2c \
  realpath \
  texinfo \
  tree \
  zlib1g-dev

RUN pip install virtualenv

# Change default shell to bash
RUN ls -sf /bin/bash /bin/sh
