/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: 4C1586521BBDD7B497F60031F87B169D16D8FA7AED5836C1B36EF972C8B05FD9
 * Entry: 0x003539cf, Ghidra index: 13095, label: FUN_003539cf
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
void FUN_003539cf(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
                 uint param_5,uint param_6,byte param_7)

{
  int iVar1;
  uint *puVar2;
  
  iVar1 = FUN_0035359e(param_1,param_2,param_3,param_4,0x40000,0,0,0);
  if (iVar1 != 0) {
    puVar2 = (uint *)FUN_0034cc49();
    *(undefined2 *)((int)puVar2 + 10) = 0;
    *puVar2 = (param_5 & 0xff0000 | param_5 >> 0x10) >> 8 |
              (param_5 & 0xff00 | param_5 << 0x10) << 8;
    *(byte *)((int)puVar2 + 9) = param_7 | 4;
    puVar2[1] = (param_6 & 0xff0000 | param_6 >> 0x10) >> 8 |
                (param_6 & 0xff00 | param_6 << 0x10) << 8;
    *(undefined1 *)(puVar2 + 2) = 0x50;
    FUN_0034a7ce(iVar1,param_2,6,0);
  }
  return;
}
