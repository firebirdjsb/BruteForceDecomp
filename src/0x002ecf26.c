/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: BCA0CF4032E5E864FCEB2C4A04EED9F05EAB7157232C03E7C4975017C3489B12
 * Entry: 0x002ecf26, Ghidra index: 10679, label: _flsall
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
/* TODO: Ghidra data labels have unresolved type and storage identities.
 * These declarations only allow syntax analysis; they are NOT verified types. */
extern uint32_t DAT_004a8fb0;
extern uint32_t DAT_004a8fb4;
/* Library Function - Single Match
    _flsall
   
   Library: Visual Studio 2003 Release */

int _flsall(int param_1)

{
  FILE *__stream;
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  
  iVar3 = 0;
  iVar2 = 0;
  iVar4 = 0;
  if (0 < DAT_004a8fb4) {
    do {
      __stream = *(FILE **)(DAT_004a8fb0 + iVar3 * 4);
      if ((__stream != (FILE *)0x0) && (((uint)__stream->_IO_read_base & 0x83) != 0)) {
        if (param_1 == 1) {
          iVar1 = _fflush(__stream);
          if (iVar1 != -1) {
            iVar2 = iVar2 + 1;
          }
        }
        else if ((param_1 == 0) && (((uint)__stream->_IO_read_base & 2) != 0)) {
          iVar1 = _fflush(__stream);
          if (iVar1 == -1) {
            iVar4 = -1;
          }
        }
      }
      iVar3 = iVar3 + 1;
    } while (iVar3 < DAT_004a8fb4);
  }
  if (param_1 != 1) {
    iVar2 = iVar4;
  }
  return iVar2;
}
