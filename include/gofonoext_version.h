/*
 * Copyright (C) 2015-2022 Slava Monich <slava@monich.com>
 * Copyright (C) 2015-2021 Jolla Ltd.
 *
 * You may use this file under the terms of BSD license as follows:
 *
 * Redistribution and use in source and binary forms, with or without
 * modification, are permitted provided that the following conditions
 * are met:
 *
 *   1. Redistributions of source code must retain the above copyright
 *      notice, this list of conditions and the following disclaimer.
 *   2. Redistributions in binary form must reproduce the above copyright
 *      notice, this list of conditions and the following disclaimer in the
 *      documentation and/or other materials provided with the distribution.
 *   3. Neither the names of the copyright holders nor the names of its
 *      contributors may be used to endorse or promote products derived
 *      from this software without specific prior written permission.
 *
 * THIS SOFTWARE IS PROVIDED BY THE COPYRIGHT HOLDERS AND CONTRIBUTORS "AS IS"
 * AND ANY EXPRESS OR IMPLIED WARRANTIES, INCLUDING, BUT NOT LIMITED TO, THE
 * IMPLIED WARRANTIES OF MERCHANTABILITY AND FITNESS FOR A PARTICULAR PURPOSE
 * ARE DISCLAIMED. IN NO EVENT SHALL THE COPYRIGHT HOLDERS OR CONTRIBUTORS
 * BE LIABLE FOR ANY DIRECT, INDIRECT, INCIDENTAL, SPECIAL, EXEMPLARY, OR
 * CONSEQUENTIAL DAMAGES (INCLUDING, BUT NOT LIMITED TO, PROCUREMENT OF
 * SUBSTITUTE GOODS OR SERVICES; LOSS OF USE, DATA, OR PROFITS; OR BUSINESS
 * INTERRUPTION) HOWEVER CAUSED AND ON ANY THEORY OF LIABILITY, WHETHER IN
 * CONTRACT, STRICT LIABILITY, OR TORT (INCLUDING NEGLIGENCE OR OTHERWISE)
 * ARISING IN ANY WAY OUT OF THE USE OF THIS SOFTWARE, EVEN IF ADVISED OF
 * THE POSSIBILITY OF SUCH DAMAGE.
 */

#ifndef GOFONOEXT_VERSION_H
#define GOFONOEXT_VERSION_H

#include "gofonoext_types.h"

/* Since 1.0.2 */

#define GOFONOEXT_VERSION_MAJOR   1
#define GOFONOEXT_VERSION_MINOR   0
#define GOFONOEXT_VERSION_RELEASE 14

#define GOFONOEXT_API_VERSION(major,minor,release) \
    (((major) << 24) | ((minor) << 16) | (release))

#define GOFONOEXT_VERSION \
    GOFONOEXT_API_VERSION(GOFONOEXT_VERSION_MAJOR,\
                          GOFONOEXT_VERSION_MINOR,\
                          GOFONOEXT_VERSION_RELEASE)

G_BEGIN_DECLS

guint32
ofonoext_version(
    void);

G_END_DECLS

#endif /* GOFONOEXT_VERSION_H */

/*
 * Local Variables:
 * mode: C
 * c-basic-offset: 4
 * indent-tabs-mode: nil
 * End:
 */
