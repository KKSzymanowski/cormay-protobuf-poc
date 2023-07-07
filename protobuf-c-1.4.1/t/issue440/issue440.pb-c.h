/* Generated by the protocol buffer compiler.  DO NOT EDIT! */
/* Generated from: t/issue440/issue440.proto */

#ifndef PROTOBUF_C_t_2fissue440_2fissue440_2eproto__INCLUDED
#define PROTOBUF_C_t_2fissue440_2fissue440_2eproto__INCLUDED

#include <protobuf-c/protobuf-c.h>

PROTOBUF_C__BEGIN_DECLS

#if PROTOBUF_C_VERSION_NUMBER < 1003000
# error This file was generated by a newer version of protoc-c which is incompatible with your libprotobuf-c headers. Please update your headers.
#elif 1004001 < PROTOBUF_C_MIN_COMPILER_VERSION
# error This file was generated by an older version of protoc-c which is incompatible with your libprotobuf-c headers. Please regenerate this file with a newer version of protoc-c.
#endif


typedef struct Int Int;
typedef struct Boolean Boolean;


/* --- enums --- */


/* --- messages --- */

struct  Int
{
  ProtobufCMessage base;
  size_t n_int_;
  int32_t *int_;
};
#define INT__INIT \
 { PROTOBUF_C_MESSAGE_INIT (&int__descriptor) \
    , 0,NULL }


struct  Boolean
{
  ProtobufCMessage base;
  size_t n_boolean;
  protobuf_c_boolean *boolean;
};
#define BOOLEAN__INIT \
 { PROTOBUF_C_MESSAGE_INIT (&boolean__descriptor) \
    , 0,NULL }


/* Int methods */
void   int__init
                     (Int         *message);
size_t int__get_packed_size
                     (const Int   *message);
size_t int__pack
                     (const Int   *message,
                      uint8_t             *out);
size_t int__pack_to_buffer
                     (const Int   *message,
                      ProtobufCBuffer     *buffer);
Int *
       int__unpack
                     (ProtobufCAllocator  *allocator,
                      size_t               len,
                      const uint8_t       *data);
void   int__free_unpacked
                     (Int *message,
                      ProtobufCAllocator *allocator);
/* Boolean methods */
void   boolean__init
                     (Boolean         *message);
size_t boolean__get_packed_size
                     (const Boolean   *message);
size_t boolean__pack
                     (const Boolean   *message,
                      uint8_t             *out);
size_t boolean__pack_to_buffer
                     (const Boolean   *message,
                      ProtobufCBuffer     *buffer);
Boolean *
       boolean__unpack
                     (ProtobufCAllocator  *allocator,
                      size_t               len,
                      const uint8_t       *data);
void   boolean__free_unpacked
                     (Boolean *message,
                      ProtobufCAllocator *allocator);
/* --- per-message closures --- */

typedef void (*Int_Closure)
                 (const Int *message,
                  void *closure_data);
typedef void (*Boolean_Closure)
                 (const Boolean *message,
                  void *closure_data);

/* --- services --- */


/* --- descriptors --- */

extern const ProtobufCMessageDescriptor int__descriptor;
extern const ProtobufCMessageDescriptor boolean__descriptor;

PROTOBUF_C__END_DECLS


#endif  /* PROTOBUF_C_t_2fissue440_2fissue440_2eproto__INCLUDED */
