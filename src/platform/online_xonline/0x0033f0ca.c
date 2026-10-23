/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: FD428C196D162F06EBC3AC53D9AA2B828954D409D0C5931D77DB33716420D0F2
 * Entry: 0x0033f0ca, Ghidra index: 12637, label: FUN_0033f0ca
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
uint FUN_0033f0ca(int param_1,int param_2)

{
  int iVar1;
  uint uVar2;
  uint local_8;
  
  local_8 = 0;
  if (param_2 == 0) {
    iVar1 = FUN_00345114(*(undefined4 *)(param_1 + 0x10),*(undefined4 *)(param_1 + 0x14),
                         *(undefined4 *)(param_1 + 0x18),param_1 + 0x1c,param_1 + 0x20,
                         param_1 + 0x24,0);
  }
  else {
    iVar1 = FUN_0034513d(*(undefined4 *)(param_1 + 0x10),*(undefined4 *)(param_1 + 0x14),
                         *(undefined4 *)(param_1 + 0x18),param_1 + 0x1c,
                         *(undefined4 *)(param_1 + 0x20),param_1 + 0x24);
  }
  if (((iVar1 == -1) && (uVar2 = XAPILIB__GetLastError(), uVar2 != 0x3e5)) &&
     (local_8 = uVar2, 0 < (int)uVar2)) {
    local_8 = uVar2 & 0xffff | 0x80070000;
  }
  return local_8;
}
