/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: 9DB2EFE2B3D1F7536C8203D0648C1E1A3389C2547AE0BDEA8A2200DBA3A20F22
 * Entry: 0x00150160, Ghidra index: 4403, label: FUN_00150160
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
char FUN_00150160(void)

{
  char cVar1;
  int in_EAX;
  undefined4 *in_ECX;
  undefined4 *puVar2;
  int iVar3;
  char local_25;
  undefined4 local_24;
  undefined4 local_20;
  undefined4 local_1c;
  int local_18 [6];
  
  local_25 = '\0';
  if ((*(byte *)((int)in_ECX + 0x3d) & 4) == 0) {
    local_18[2] = *(undefined4 *)(in_EAX + 0x7b8);
    local_18[0] = *(int *)(in_EAX + 0x7b0);
    local_18[1] = *(undefined4 *)(in_EAX + 0x7b4);
    if ((*(int *)(in_EAX + 0x1f8) == 6) || (*(int *)(in_EAX + 0x1f8) == 7)) {
      local_24 = 1;
      local_20 = 4;
      local_1c = 5;
    }
    else {
      local_24 = 0;
      local_20 = 2;
      local_1c = 3;
    }
    FUN_0014fac0(in_ECX,in_EAX,local_18 + 3,&local_24,local_18);
    iVar3 = 0;
    puVar2 = (undefined4 *)(in_EAX + 0x234);
    do {
      if (local_18[iVar3 + 3] == 0) {
        puVar2[-3] = 0;
        *puVar2 = 0;
      }
      else {
        local_25 = FUN_00150290(local_18[iVar3 + 3],local_18[iVar3],iVar3);
      }
      iVar3 = iVar3 + 1;
      puVar2 = puVar2 + 1;
    } while (iVar3 < 3);
    if (local_25 != '\0') {
      *(undefined4 **)(in_EAX + 0x214) = in_ECX;
      *(undefined4 *)(in_EAX + 0x210) = *in_ECX;
      return local_25;
    }
  }
  else if ((in_ECX[*(int *)(in_EAX + 0x5b0) * 6 + -4] != 0) &&
          (cVar1 = FUN_00150290(in_ECX[*(int *)(in_EAX + 0x5b0) * 6 + -4],0x3f800000,0xffffffff),
          cVar1 != '\0')) {
    *(undefined4 **)(in_EAX + 0x240) = in_ECX;
    return cVar1;
  }
  return '\0';
}
