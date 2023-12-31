/* -*- Mode: C; c-basic-offset: 4; indent-tabs-mode: nil -*- */
/*
 * Virt Viewer: A virtual machine console viewer
 *
 * Copyright (C) 2012 Red Hat, Inc.
 *
 * This program is free software; you can redistribute it and/or modify
 * it under the terms of the GNU General Public License as published by
 * the Free Software Foundation; either version 2 of the License, or
 * (at your option) any later version.
 *
 * This program is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 * GNU General Public License for more details.
 *
 * You should have received a copy of the GNU General Public License
 * along with this program; if not, write to the Free Software
 * Foundation, Inc., 59 Temple Place, Suite 330, Boston, MA 02111-1307  USA
 */

#pragma once

#include "virt-viewer-app.h"

#define VIRT_VIEWER_TYPE_FILE            (virt_viewer_file_get_type ())
G_DECLARE_FINAL_TYPE(VirtViewerFile,
                     virt_viewer_file,
                     VIRT_VIEWER,
                     FILE,
                     GObject)

GType virt_viewer_file_get_type(void);

VirtViewerFile* virt_viewer_file_new(const gchar* path, GError** error);
VirtViewerFile* virt_viewer_file_new_from_buffer(const gchar* buf, gsize len,
                                                 GError** error);
gboolean virt_viewer_file_is_set(VirtViewerFile* self, const gchar* key);

gchar* virt_viewer_file_get_unix_path(VirtViewerFile* self);
void virt_viewer_file_set_unix_path(VirtViewerFile* self, const gchar* value);
gchar* virt_viewer_file_get_ca(VirtViewerFile* self);
void virt_viewer_file_set_ca(VirtViewerFile* self, const gchar* value);
gchar* virt_viewer_file_get_host(VirtViewerFile* self);
void virt_viewer_file_set_host(VirtViewerFile* self, const gchar* value);
gchar* virt_viewer_file_get_file_type(VirtViewerFile* self);
void virt_viewer_file_set_type(VirtViewerFile* self, const gchar* value);
gint virt_viewer_file_get_port(VirtViewerFile* self);
void virt_viewer_file_set_port(VirtViewerFile* self, gint value);
gint virt_viewer_file_get_tls_port(VirtViewerFile* self);
void virt_viewer_file_set_tls_port(VirtViewerFile* self, gint value);
gchar* virt_viewer_file_get_username(VirtViewerFile* self);
void virt_viewer_file_set_username(VirtViewerFile* self, const gchar* value);
gchar* virt_viewer_file_get_password(VirtViewerFile* self);
void virt_viewer_file_set_password(VirtViewerFile* self, const gchar* value);
gchar** virt_viewer_file_get_disable_channels(VirtViewerFile* self, gsize* length);
void virt_viewer_file_set_disable_channels(VirtViewerFile* self, const gchar* const* value, gsize length);
gchar** virt_viewer_file_get_disable_effects(VirtViewerFile* self, gsize* length);
void virt_viewer_file_set_disable_effects(VirtViewerFile* self, const gchar* const* value, gsize length);
gchar* virt_viewer_file_get_tls_ciphers(VirtViewerFile* self);
void virt_viewer_file_set_tls_ciphers(VirtViewerFile* self, const gchar* value);
gchar* virt_viewer_file_get_host_subject(VirtViewerFile* self);
void virt_viewer_file_set_host_subject(VirtViewerFile* self, const gchar* value);
gint virt_viewer_file_get_fullscreen(VirtViewerFile* self);
void virt_viewer_file_set_fullscreen(VirtViewerFile* self, gint value);
gchar* virt_viewer_file_get_title(VirtViewerFile* self);
void virt_viewer_file_set_title(VirtViewerFile* self, const gchar* value);
gchar* virt_viewer_file_get_toggle_fullscreen(VirtViewerFile* self);
void virt_viewer_file_set_toggle_fullscreen(VirtViewerFile* self, const gchar* value);
gchar* virt_viewer_file_get_release_cursor(VirtViewerFile* self);
void virt_viewer_file_set_release_cursor(VirtViewerFile* self, const gchar* value);
gchar* virt_viewer_file_get_zoom_in(VirtViewerFile* self);
void virt_viewer_file_set_zoom_in(VirtViewerFile* self, const gchar* value);
gchar* virt_viewer_file_get_zoom_out(VirtViewerFile* self);
void virt_viewer_file_set_zoom_out(VirtViewerFile* self, const gchar* value);
gchar* virt_viewer_file_get_zoom_reset(VirtViewerFile* self);
void virt_viewer_file_set_zoom_reset(VirtViewerFile* self, const gchar* value);

gint virt_viewer_file_get_enable_smartcard(VirtViewerFile* self);
void virt_viewer_file_set_enable_smartcard(VirtViewerFile* self, gint value);
gint virt_viewer_file_get_enable_usbredir(VirtViewerFile* self);
void virt_viewer_file_set_enable_usbredir(VirtViewerFile* self, gint value);
gint virt_viewer_file_get_color_depth(VirtViewerFile* self);
void virt_viewer_file_set_color_depth(VirtViewerFile* self, gint value);
gint virt_viewer_file_get_enable_usb_autoshare(VirtViewerFile* self);
void virt_viewer_file_set_enable_usb_autoshare(VirtViewerFile* self, gint value);
gchar* virt_viewer_file_get_usb_filter(VirtViewerFile* self);
void virt_viewer_file_set_usb_filter(VirtViewerFile* self, const gchar* value);
gchar* virt_viewer_file_get_usb_redirect_on_connect(VirtViewerFile* self);
void virt_viewer_file_set_usb_redirect_on_connect(VirtViewerFile* self, const gchar* value);
gboolean virt_viewer_file_fill_app(VirtViewerFile* self, VirtViewerApp *app, GError **error);
gchar* virt_viewer_file_get_smartcard_insert(VirtViewerFile* self);
void virt_viewer_file_set_smartcard_insert(VirtViewerFile* self, const gchar* value);
gchar* virt_viewer_file_get_smartcard_remove(VirtViewerFile* self);
void virt_viewer_file_set_smartcard_remove(VirtViewerFile* self, const gchar* value);
gchar* virt_viewer_file_get_proxy(VirtViewerFile* self);
void virt_viewer_file_set_proxy(VirtViewerFile* self, const gchar* value);
gchar* virt_viewer_file_get_version(VirtViewerFile* self);
void virt_viewer_file_set_version(VirtViewerFile* self, const gchar* value);
GHashTable* virt_viewer_file_get_versions(VirtViewerFile* self);
void virt_viewer_file_set_versions(VirtViewerFile* self, GHashTable *version_table);
gchar* virt_viewer_file_get_version_url(VirtViewerFile* self);
void virt_viewer_file_set_version_url(VirtViewerFile* self, const gchar* value);
gchar** virt_viewer_file_get_secure_channels(VirtViewerFile* self, gsize* length);
void virt_viewer_file_set_secure_channels(VirtViewerFile* self, const gchar* const* value, gsize length);
gint virt_viewer_file_get_delete_this_file(VirtViewerFile* self);
void virt_viewer_file_set_delete_this_file(VirtViewerFile* self, gint value);
gchar* virt_viewer_file_get_secure_attention(VirtViewerFile* self);
void virt_viewer_file_set_secure_attention(VirtViewerFile* self, const gchar* value);
gchar* virt_viewer_file_get_usb_device_reset(VirtViewerFile* self);
void virt_viewer_file_set_usb_device_reset(VirtViewerFile* self, const gchar* value);
gint virt_viewer_file_get_ovirt_admin(VirtViewerFile* self);
void virt_viewer_file_set_ovirt_admin(VirtViewerFile* self, gint value);
gchar* virt_viewer_file_get_ovirt_host(VirtViewerFile* self);
void virt_viewer_file_set_ovirt_host(VirtViewerFile* self, const gchar* value);
gchar* virt_viewer_file_get_ovirt_vm_guid(VirtViewerFile* self);
void virt_viewer_file_set_ovirt_vm_guid(VirtViewerFile* self, const gchar* value);
gchar* virt_viewer_file_get_ovirt_jsessionid(VirtViewerFile* self);
void virt_viewer_file_set_ovirt_jsessionid(VirtViewerFile* self, const gchar* value);
gchar* virt_viewer_file_get_ovirt_sso_token(VirtViewerFile* self);
void virt_viewer_file_set_ovirt_sso_token(VirtViewerFile* self, const gchar* value);
gchar* virt_viewer_file_get_ovirt_ca(VirtViewerFile* self);
void virt_viewer_file_set_ovirt_ca(VirtViewerFile* self, const gchar* value);
