/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: 641BFB12FF60C30AE5362AFD971F935F857D5D42933BE9EB0C02D2BED29F1DB4
 * Entry: 0x002eb5a6, Ghidra index: 10625, label: FUN_002eb5a6
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
/* TODO: Ghidra data labels have unresolved type and storage identities.
 * These declarations only allow syntax analysis; they are NOT verified types. */
extern uint32_t _DAT_0040f4d8;
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int FUN_002eb5a6(FILE *param_1,int param_2,int param_3)

{
  char *pcVar1;
  long lVar2;
  int iVar3;
  
  if ((((uint)param_1->_IO_read_base & 0x83) == 0) ||
     (((param_3 != 0 && (param_3 != 1)) && (param_3 != 2)))) {
    _DAT_0040f4d8 = 0x16;
    iVar3 = -1;
  }
  else {
    param_1->_IO_read_base = (char *)((uint)param_1->_IO_read_base & 0xffffffef);
    if (param_3 == 1) {
      lVar2 = _ftell(param_1);
      param_2 = param_2 + lVar2;
      param_3 = 0;
    }
    __flush(param_1);
    pcVar1 = param_1->_IO_read_base;
    if ((char)pcVar1 < '\0') {
      param_1->_IO_read_base = (char *)((uint)pcVar1 & 0xfffffffc);
    }
    else if (((((uint)pcVar1 & 1) != 0) && (((uint)pcVar1 & 8) != 0)) &&
            (((uint)pcVar1 & 0x400) == 0)) {
      param_1->_IO_write_end = (char *)0x200;
    }
    iVar3 = FUN_002ef651(param_1->_IO_write_base,param_2,param_3);
    iVar3 = (iVar3 != -1) - 1;
  }
  return iVar3;
}
