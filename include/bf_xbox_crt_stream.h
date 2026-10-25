/* Original Xbox MSVC 2003 stream fields verified from XBE
 * _freopen 0x002EA5E9 and _fclose 0x002EB16E.
 * Guest pointers remain 32-bit words; no host FILE ABI equivalence. */
#ifndef BF_XBOX_CRT_STREAM_H
#define BF_XBOX_CRT_STREAM_H
#include <stdint.h>
#include <stddef.h>
typedef struct bf_xbox_crt_stream32 {
  uint32_t word_00;
  uint32_t word_04;
  uint32_t word_08;
  uint32_t flags_0c;
  uint32_t handle_10;
  uint32_t unknown_14;
  uint32_t unknown_18;
  uint32_t buffer_1c;
} bf_xbox_crt_stream32;
_Static_assert(sizeof(bf_xbox_crt_stream32)==0x20,"Xbox CRT stream field span");
_Static_assert(offsetof(bf_xbox_crt_stream32,flags_0c)==0x0c,"flags offset");
_Static_assert(offsetof(bf_xbox_crt_stream32,handle_10)==0x10,"handle offset");
_Static_assert(offsetof(bf_xbox_crt_stream32,buffer_1c)==0x1c,"buffer offset");
#endif
