#ifndef _ASSERT_H_
#define _ASSERT_H_

#include <stdio.h>
#include "./types.h"

#ifdef DEBUG
    #define debug_msg(_label, _msg, ...)        do { \
                                                    printf(_msg, ## __VA_ARGS__); \
                                                    printf("\n"); \
                                                } while(0)
#else
    #define debug_msg( _label, _msg, ...)                                      ((void)(0))
#endif


#define debug_err(_msg, ...)         debug_msg("ERROR", _msg, ## __VA_ARGS__);
#define debug_warn(_msg, ...)        debug_msg("WARN",  _msg, ## __VA_ARGS__);
#define debug_info(_msg, ...)        debug_msg("INFO",  _msg, ## __VA_ARGS__);


#define soft_assert_ret(_cond, _ret, _msg, ...)                 do{if(!(_cond)){debug_err(_msg, ## __VA_ARGS__); return (_ret);         }}while(0)
#define soft_assert_ret_int(_cond, _msg, ...)                   do{if(!(_cond)){debug_err(_msg, ## __VA_ARGS__); return -1;             }}while(0)
#define soft_assert_ret_bool(_cond, _msg, ...)                  do{if(!(_cond)){debug_err(_msg, ## __VA_ARGS__); return false;          }}while(0)
#define soft_assert_ret_ptr(_cond, _msg, ...)                   do{if(!(_cond)){debug_err(_msg, ## __VA_ARGS__); return INVALID_HANDLE; }}while(0)
#define soft_assert_ret_void(_cond, _msg, ...)                  do{if(!(_cond)){debug_err(_msg, ## __VA_ARGS__); return;                }}while(0)
#define soft_assert_break(_cond, _msg, ...)                     do{if(!(_cond)){debug_err(_msg, ## __VA_ARGS__); break;                 }}while(0)
#define soft_assert_continue(_cond, _msg, ...)                  do{if(!(_cond)){debug_err(_msg, ## __VA_ARGS__); continue;              }}while(0)

#define soft_assert_warn_ret(_cond, _ret, _msg, ...)            do{if(!(_cond)){debug_warn(_msg, ## __VA_ARGS__);}}while(0)
#define soft_assert_warn_ret_int(_cond, _msg, ...)              do{if(!(_cond)){debug_warn(_msg, ## __VA_ARGS__);}}while(0)
#define soft_assert_warn_ret_bool(_cond, _msg, ...)             do{if(!(_cond)){debug_warn(_msg, ## __VA_ARGS__);}}while(0)
#define soft_assert_warn_ret_ptr(_cond, _msg, ...)              do{if(!(_cond)){debug_warn(_msg, ## __VA_ARGS__);}}while(0)
#define soft_assert_warn_ret_void(_cond, _msg, ...)             do{if(!(_cond)){debug_warn(_msg, ## __VA_ARGS__);}}while(0)
#define soft_assert_warn_break(_cond, _msg, ...)                do{if(!(_cond)){debug_warn(_msg, ## __VA_ARGS__);}}while(0)
#define soft_assert_warn_continue(_cond, _msg, ...)             do{if(!(_cond)){debug_warn(_msg, ## __VA_ARGS__);}}while(0)

#endif //_ASSERT_H_