
/*
 * Copyright (C) 2010-2012 Alibaba Group Holding Limited
 */


#ifndef _NGX_TFS_RC_SERVER_MESSAGE_H_INCLUDED_
#define _NGX_TFS_RC_SERVER_MESSAGE_H_INCLUDED_


#include <ngx_http_tfs.h>


ngx_chain_t *ngx_http_tfs_rc_server_create_message(ngx_http_tfs_t *t);
ngx_int_t ngx_http_tfs_rc_server_parse_message(ngx_http_tfs_t *t);


#endif  /* _NGX_TFS_RC_SERVER_MESSAGE_H_INCLUDED_ */
