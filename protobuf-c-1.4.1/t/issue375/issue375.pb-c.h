/* Generated by the protocol buffer compiler.  DO NOT EDIT! */
/* Generated from: t/issue375/issue375.proto */

#ifndef PROTOBUF_C_t_2fissue375_2fissue375_2eproto__INCLUDED
#define PROTOBUF_C_t_2fissue375_2fissue375_2eproto__INCLUDED

#include <protobuf-c/protobuf-c.h>

PROTOBUF_C__BEGIN_DECLS

#if PROTOBUF_C_VERSION_NUMBER < 1000000
# error This file was generated by a newer version of protoc-c which is incompatible with your libprotobuf-c headers. Please update your headers.
#elif 1004001 < PROTOBUF_C_MIN_COMPILER_VERSION
# error This file was generated by an older version of protoc-c which is incompatible with your libprotobuf-c headers. Please regenerate this file with a newer version of protoc-c.
#endif


typedef struct Issue375__TestMessage Issue375__TestMessage;


/* --- enums --- */


/* --- messages --- */

struct  Issue375__TestMessage
{
  ProtobufCMessage base;
  size_t n_nums;
  int32_t *nums;
};
#define ISSUE375__TEST_MESSAGE__INIT \
 { PROTOBUF_C_MESSAGE_INIT (&issue375__test_message__descriptor) \
    , 0,NULL }


/* Issue375__TestMessage methods */
void   issue375__test_message__init
                     (Issue375__TestMessage         *message);
size_t issue375__test_message__get_packed_size
                     (const Issue375__TestMessage   *message);
size_t issue375__test_message__pack
                     (const Issue375__TestMessage   *message,
                      uint8_t             *out);
size_t issue375__test_message__pack_to_buffer
                     (const Issue375__TestMessage   *message,
                      ProtobufCBuffer     *buffer);
Issue375__TestMessage *
       issue375__test_message__unpack
                     (ProtobufCAllocator  *allocator,
                      size_t               len,
                      const uint8_t       *data);
void   issue375__test_message__free_unpacked
                     (Issue375__TestMessage *message,
                      ProtobufCAllocator *allocator);
/* --- per-message closures --- */

typedef void (*Issue375__TestMessage_Closure)
                 (const Issue375__TestMessage *message,
                  void *closure_data);

/* --- services --- */


/* --- descriptors --- */

extern const ProtobufCMessageDescriptor issue375__test_message__descriptor;

PROTOBUF_C__END_DECLS


#endif  /* PROTOBUF_C_t_2fissue375_2fissue375_2eproto__INCLUDED */
