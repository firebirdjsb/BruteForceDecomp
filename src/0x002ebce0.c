/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: 62E170FCBAC1EFAD7BDB740FA4AE8B94D5302DA69729F2757DD2C2E35934E261
 * Entry: 0x002ebce0, Ghidra index: 10640, label: FID_conflict:_wprintf
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
/* TODO: Ghidra data labels have unresolved type and storage identities.
 * These declarations only allow syntax analysis; they are NOT verified types. */
extern uint32_t DAT_003b69a8;
/* Library Function - Multiple Matches With Different Base Names
    _printf
    _wprintf
   
   Library: Visual Studio 2003 Release */

int __cdecl FID_conflict__wprintf(char *__format,...)

{
  undefined4 uVar1;
  int iVar2;
  
  uVar1 = __stbuf(&DAT_003b69a8);
  iVar2 = FUN_002edbde(&DAT_003b69a8,__format,&stack0x00000008);
  __ftbuf(uVar1,&DAT_003b69a8);
  return iVar2;
}
