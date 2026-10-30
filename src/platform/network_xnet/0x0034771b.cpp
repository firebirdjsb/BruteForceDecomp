/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: 3937E12BA400CDC49E67A851D7688DCB73B7278E7F2667172F5983150192BC60
 * Entry: 0x0034771b, Ghidra index: 12864, label: FUN_0034771b
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
undefined4 FUN_0034771b(int param_1,uint param_2,undefined4 *param_3)

{
  uint uVar1;
  int iVar2;
  uint uVar3;
  undefined4 *puVar4;
  int local_214;
  int local_210;
  int local_20c;
  undefined4 local_208 [123];
  uint local_1c;
  int local_18;
  undefined1 local_14 [8];
  int local_c [2];
  
  if ((param_1 != -1) && (param_2 < 0xc)) {
    local_c[0] = (param_2 + 8) * 0x200;
    local_c[1] = 0;
    iVar2 = NtReadFile(param_1,0,0,0,local_14,&local_214,0x200,local_c);
    uVar1 = local_1c;
    if (-1 < iVar2) {
      local_1c = 0;
      uVar3 = FUN_003476f1(&local_214,0x200);
      local_1c = ~uVar3;
      if ((((local_214 == 0x79132568) && (local_18 == -0x55ab0000)) && (local_210 != 0)) &&
         ((local_20c != 0 && (~uVar3 == uVar1)))) {
        puVar4 = local_208;
        for (iVar2 = 0x7b; iVar2 != 0; iVar2 = iVar2 + -1) {
          *param_3 = *puVar4;
          puVar4 = puVar4 + 1;
          param_3 = param_3 + 1;
        }
        return 1;
      }
    }
  }
  return 0;
}
