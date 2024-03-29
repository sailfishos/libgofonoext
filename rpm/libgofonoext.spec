Name: libgofonoext

Version: 1.0.14
Release: 0
Summary: Client library for Sailfish OS ofono extensions
License: BSD
URL: https://github.com/sailfishos/libgofonoext
Source: %{name}-%{version}.tar.bz2

%define libglibutil_version 1.0.5

BuildRequires: pkgconfig
BuildRequires: pkgconfig(glib-2.0)
BuildRequires: pkgconfig(libgofono)
BuildRequires:  pkgconfig(libglibutil) >= %{libglibutil_version}

# license macro requires rpm >= 4.11
BuildRequires: pkgconfig(rpm)
%define license_support %(pkg-config --exists 'rpm >= 4.11'; echo $?)

Requires:   libglibutil >= %{libglibutil_version}
Requires(post): /sbin/ldconfig
Requires(postun): /sbin/ldconfig

%description
Provides glib-based API for Sailfish OS ofono extensions

%package devel
Summary: Development library for %{name}
Requires: %{name} = %{version}

%description devel
This package contains the development library for %{name}.

%prep
%setup -q

%build
make %{_smp_mflags} LIBDIR=%{_libdir} KEEP_SYMBOLS=1 release pkgconfig

%install
make LIBDIR=%{_libdir} DESTDIR=%{buildroot} install-dev

%post -p /sbin/ldconfig

%postun -p /sbin/ldconfig

%files
%defattr(-,root,root,-)
%{_libdir}/%{name}.so.*
%if %{license_support} == 0
%license LICENSE
%endif

%files devel
%defattr(-,root,root,-)
%dir %{_includedir}/gofonoext
%{_libdir}/pkgconfig/%{name}.pc
%{_libdir}/%{name}.so
%{_includedir}/gofonoext/*.h
