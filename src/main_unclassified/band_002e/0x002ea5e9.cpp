/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: 93B7261C255B89541EFA1B4718B8B2C61B4CDB17DFDFBA0A739286EBA154F50B
 * Entry: 0x002ea5e9, Ghidra index: 10586, label: _freopen
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
#include "bf_xbox_crt_stream.h"
/* Library Function - Single Match
    _freopen
   
   Library: Visual Studio 2003 Release */

bf_xbox_crt_stream32 * __cdecl _freopen(char *__filename,char *__modes,bf_xbox_crt_stream32 *__stream)

{
  bf_xbox_crt_stream32 *pFVar1;
  
  if ((__stream->flags_0c & 0x83) != 0) {
    _fclose(__stream);
  }
  __stream->word_08 = 0;
  __stream->word_00 = 0;
  __stream->flags_0c = 0;
  __stream->word_04 = 0;
  pFVar1 = (bf_xbox_crt_stream32 *)__openfile(__filename,__modes,0x40,__stream);
  return pFVar1;
}
