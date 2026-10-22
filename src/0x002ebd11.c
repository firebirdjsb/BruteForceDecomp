/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: 3E2C8D98840A95368A0B61A36369CC9B7929A0C8DCF706BB42CCFD2DADD4F9B9
 * Entry: 0x002ebd11, Ghidra index: 10641, label: FID_conflict:_vprintf
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
/* TODO: Ghidra data labels have unresolved type and storage identities.
 * These declarations only allow syntax analysis; they are NOT verified types. */
extern uint32_t DAT_003b69a8;
/* Library Function - Multiple Matches With Different Base Names
    _vprintf
    _vwprintf
   
   Library: Visual Studio 2003 Release */

int __cdecl FID_conflict__vprintf(char *__format,__gnuc_va_list __arg)

{
  undefined4 uVar1;
  int iVar2;
  
  uVar1 = __stbuf(&DAT_003b69a8);
  iVar2 = FUN_002edbde(&DAT_003b69a8,__format,__arg);
  __ftbuf(uVar1,&DAT_003b69a8);
  return iVar2;
}
