/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: AFD07CABD01CBCEF39DD36462871AE0CBB2F760FD38E23DE5B95AC4480041683
 * Entry: 0x00023d00, Ghidra index: 246, label: FUN_00023d00
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
undefined4 FUN_00023d00(void)

{
  int iVar1;
  char cVar2;
  char cVar3;
  int in_EAX;
  int local_8;
  int local_4;
  
  local_8 = 0;
  local_4 = 0;
  FUN_0001a7e0(&local_8,&local_4);
  iVar1 = local_4;
  if ((local_8 == 0) && (local_4 == 0)) {
    return 0;
  }
  cVar2 = FUN_0001a850(0,local_8);
  cVar3 = FUN_0001a850(0,iVar1);
  if ((*(byte *)(*(int *)(in_EAX + 0xc) + 0x1a8) & 1) == 0) {
    if (cVar2 != '\0') {
      return 1;
    }
  }
  else {
    if (cVar2 != '\0') {
      return 1;
    }
    if (cVar3 == '\0') {
      return 0;
    }
    cVar3 = FUN_00023cd0();
  }
  if (cVar3 != '\0') {
    return 1;
  }
  return 0;
}
