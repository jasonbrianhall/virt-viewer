# THIS FILE WAS AUTO-GENERATED
#
#  $ lcitool dockerfile --cross mingw32 fedora-rawhide libvirt,libvirt-glib,gtk-vnc,virt-viewer
#
# https://gitlab.com/libvirt/libvirt-ci/-/commit/318adcadcf442daba1883f5046ad1970b65e5ca0
FROM registry.fedoraproject.org/fedora:rawhide

RUN dnf install -y nosync && \
    echo -e '#!/bin/sh\n\
if test -d /usr/lib64\n\
then\n\
    export LD_PRELOAD=/usr/lib64/nosync/nosync.so\n\
else\n\
    export LD_PRELOAD=/usr/lib/nosync/nosync.so\n\
fi\n\
exec "$@"' > /usr/bin/nosync && \
    chmod +x /usr/bin/nosync && \
    nosync dnf update -y --nogpgcheck fedora-gpg-keys && \
    nosync dnf update -y && \
    nosync dnf install -y \
        augeas \
        bash-completion \
        ca-certificates \
        ccache \
        cppi \
        diffutils \
        dnsmasq \
        dwarves \
        ebtables \
        firewalld-filesystem \
        git \
        glibc-langpack-en \
        gtk-doc \
        icoutils \
        intltool \
        iproute \
        iproute-tc \
        iscsi-initiator-utils \
        kmod \
        libtool \
        libwsman-devel \
        libxml2 \
        libxslt \
        lvm2 \
        make \
        meson \
        nfs-utils \
        ninja-build \
        numad \
        parted \
        perl \
        polkit \
        python3 \
        python3-docutils \
        python3-flake8 \
        qemu-img \
        radvd \
        rpcgen \
        rpm-build \
        scrub \
        sheepdog \
        vala \
        zfs-fuse && \
    nosync dnf autoremove -y && \
    nosync dnf clean all -y && \
    rpm -qa | sort > /packages.txt && \
    mkdir -p /usr/libexec/ccache-wrappers && \
    ln -s /usr/bin/ccache /usr/libexec/ccache-wrappers/i686-w64-mingw32-cc && \
    ln -s /usr/bin/ccache /usr/libexec/ccache-wrappers/i686-w64-mingw32-$(basename /usr/bin/gcc)

RUN nosync dnf install -y \
        mingw32-curl \
        mingw32-dbus \
        mingw32-dlfcn \
        mingw32-gcc \
        mingw32-gdk-pixbuf \
        mingw32-gettext \
        mingw32-glib2 \
        mingw32-gnutls \
        mingw32-gstreamer1-plugins-bad-free \
        mingw32-gstreamer1-plugins-good \
        mingw32-gtk3 \
        mingw32-headers \
        mingw32-libgcrypt \
        mingw32-libgovirt \
        mingw32-libssh2 \
        mingw32-libxml2 \
        mingw32-pkg-config \
        mingw32-portablexdr \
        mingw32-readline \
        mingw32-rest \
        mingw32-spice-gtk3 && \
    nosync dnf clean all -y

ENV LANG "en_US.UTF-8"
ENV MAKE "/usr/bin/make"
ENV NINJA "/usr/bin/ninja"
ENV PYTHON "/usr/bin/python3"
ENV CCACHE_WRAPPERSDIR "/usr/libexec/ccache-wrappers"

ENV ABI "i686-w64-mingw32"
ENV MESON_OPTS "--cross-file=/usr/share/mingw/toolchain-mingw32.meson"