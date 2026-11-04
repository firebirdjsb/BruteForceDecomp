/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: 372D97F4F40F281488EE951ED53E80237F7090B65EA84E045AECF72B281C023A
 * Entry: 0x003477ce, Ghidra index: 12865, label: FUN_003477ce
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
/* Source-matched C++17 declaration only: original guest ABI_UNVERIFIED. */
extern int FUN_003476f1(uint *param_1,uint param_2);
bool FUN_003477ce(int param_1,uint param_2,undefined4 *param_3)

{
  int iVar1;
  undefined4 *puVar2;
  bool bVar3;
  undefined4 local_214;
  undefined4 local_210;
  undefined4 local_20c;
  undefined4 local_208 [123];
  uint local_1c;
  undefined4 local_18;
  undefined1 local_14 [8];
  int local_c [2];
  
  if ((param_1 == -1) || (0xb < param_2)) {
    bVar3 = false;
  }
  else {
    local_c[0] = (param_2 + 8) * 0x200;
    local_210 = 1;
    local_20c = 1;
    local_214 = 0x79132568;
    local_18 = 0xaa550000;
    puVar2 = local_208;
    for (iVar1 = 0x7b; iVar1 != 0; iVar1 = iVar1 + -1) {
      *puVar2 = *param_3;
      param_3 = param_3 + 1;
      puVar2 = puVar2 + 1;
    }
    local_c[1] = 0;
    local_1c = 0;
    local_1c = FUN_003476f1(&local_214,0x200);
    local_1c = ~local_1c;
    iVar1 = NtWriteFile(param_1,0,0,0,local_14,&local_214,0x200,local_c);
    bVar3 = -1 < iVar1;
  }
  return bVar3;
}
