/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: 67FFB89C94408F16E5AA279A862453D9F6CB79FD67A54ECF1D0754F0E3025666
 * Entry: 0x000d42b0, Ghidra index: 2644, label: FUN_000d42b0
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
extern void FUN_0008f6e0(std::uint32_t guest_edx);

undefined4 FUN_000d42b0(void)

{
  undefined4 uVar1;
  int in_EAX;
  undefined4 *puVar2;
  bool bVar3;
  undefined4 local_8;
  int local_4;
  
  puVar2 = &local_8;
  local_8 = 0;
  bVar3 = *(int *)(in_EAX + 8) != 1;
  if (bVar3) {
    local_4 = 0;
  }
  else {
    puVar2 = (undefined4 *)(in_EAX + 0xc);
  }
  uVar1 = *(undefined4 *)((int)puVar2 + 4);
  if ((bVar3) && (local_4 != 0)) {
    FUN_0008f6e0();
  }
  return uVar1;
}
