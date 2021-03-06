
/*
 * Copyright (C) Xiaozhe Wang (chaoslawful)
 * Copyright (C) Yichun Zhang (agentzh)
 */


#ifndef _NGX_STREAM_LUA_PCREFIX_H_INCLUDED_
#define _NGX_STREAM_LUA_PCREFIX_H_INCLUDED_


#include "ngx_stream_lua_common.h"


#if (NGX_PCRE)
ngx_pool_t *ngx_stream_lua_pcre_malloc_init(ngx_pool_t *pool);
void ngx_stream_lua_pcre_malloc_done(ngx_pool_t *old_pool);
#endif


#endif /* _NGX_STREAM_LUA_PCREFIX_H_INCLUDED_ */
