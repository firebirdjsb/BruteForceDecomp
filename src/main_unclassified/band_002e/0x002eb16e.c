/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: FA44C4049BE7691BE572132C7CB183A0E776D1EBC43301CDEA7F2C684D37BDDA
 * Entry: 0x002eb16e, Ghidra index: 10613, label: _fclose
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
#include "bf_xbox_crt_stream.h"
/* Library Function - Single Match
    _fclose
   
   Library: Visual Studio 2003 Release */

int __cdecl _fclose(bf_xbox_crt_stream32 *__stream)

{
  int iVar1;
  int iVar2;
  
  iVar2 = -1;
  if ((__stream->flags_0c & 0x40) == 0) {
    if ((__stream->flags_0c & 0x83) != 0) {
      iVar2 = __flush(__stream);
      __freebuf(__stream);
      iVar1 = FUN_002ef342(__stream->handle_10);
      if (iVar1 < 0) {
        iVar2 = -1;
      }
      else if (__stream->buffer_1c != 0) {
                    /* WARNING: Subroutine does not return */
        thunk_FUN_00237ec0(__stream->buffer_1c);
      }
    }
  }
  else {
    iVar2 = -1;
  }
  __stream->flags_0c = 0;
  return iVar2;
}
