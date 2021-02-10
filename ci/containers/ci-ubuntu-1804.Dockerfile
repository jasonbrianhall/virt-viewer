# THIS FILE WAS AUTO-GENERATED
#
#  $ lcitool dockerfile ubuntu-1804 libvirt+dist,libvirt-glib+dist,gtk-vnc+dist,virt-viewer
#
# https://gitlab.com/libvirt/libvirt-ci/-/commit/318adcadcf442daba1883f5046ad1970b65e5ca0
FROM docker.io/library/ubuntu:18.04

RUN export DEBIAN_FRONTEND=noninteractive && \
    apt-get update && \
    apt-get install -y eatmydata && \
    eatmydata apt-get dist-upgrade -y && \
    eatmydata apt-get install --no-install-recommends -y \
            bash-completion \
            ca-certificates \
            ccache \
            gcc \
            git \
            icoutils \
            libglib2.0-dev \
            libgtk-3-dev \
            libgtk-vnc-2.0-dev \
            librest-dev \
            libspice-client-gtk-3.0-dev \
            libtool \
            libtool-bin \
            libvirt-dev \
            libvirt-glib-1.0-dev \
            libvte-2.91-dev \
            libxml2-dev \
            libxml2-utils \
            locales \
            make \
            ninja-build \
            pkgconf \
            python3-pip \
            python3-setuptools \
            python3-wheel && \
    eatmydata apt-get autoremove -y && \
    eatmydata apt-get autoclean -y && \
    sed -Ei 's,^# (en_US\.UTF-8 .*)$,\1,' /etc/locale.gen && \
    dpkg-reconfigure locales && \
    dpkg-query --showformat '${Package}_${Version}_${Architecture}\n' --show > /packages.txt && \
    mkdir -p /usr/libexec/ccache-wrappers && \
    ln -s /usr/bin/ccache /usr/libexec/ccache-wrappers/cc && \
    ln -s /usr/bin/ccache /usr/libexec/ccache-wrappers/$(basename /usr/bin/gcc)

RUN pip3 install \
         meson==0.54.0

ENV LANG "en_US.UTF-8"
ENV MAKE "/usr/bin/make"
ENV NINJA "/usr/bin/ninja"
ENV CCACHE_WRAPPERSDIR "/usr/libexec/ccache-wrappers"