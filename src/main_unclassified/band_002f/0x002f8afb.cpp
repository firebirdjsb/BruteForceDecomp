/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: 7293EA386DFE6CF0F606C6CE4CA0BAF061FB228ED4188829EB1D6C7CFEA422DD
 * Entry: 0x002f8afb, Ghidra index: 10959, label: FUN_002f8afb
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
void FUN_002f8afb(void)

{
  ushort uVar1;
  byte bVar2;
  int *piVar3;
  undefined4 uVar4;
  
  uVar1 = *(ushort *)(uintptr_t)(*(uint32_t *)(uintptr_t)UINT32_C(0x00386520) + 4);
  bVar2 = ~(byte)(*(uint32_t *)(uintptr_t)*(uint32_t *)(uintptr_t)UINT32_C(0x00386380) >> 1) & 1;
  if (uVar1 == 0xf68) {
    piVar3 = (int *)((-(uint)(bVar2 != 0) & 0xffff1471) + 0x80039749);
  }
  else if (uVar1 == 0xfc2) {
    piVar3 = (int *)(-(uint)(bVar2 != 0) & 0x8002ab88);
  }
  else if (uVar1 == 0xfc7) {
    piVar3 = (int *)((-(uint)(bVar2 != 0) & 0xffff12cb) + 0x800398cd);
  }
  else {
    if (uVar1 < 0x12d1) {
      return;
    }
    if (0x12d2 < uVar1) {
      return;
    }
    piVar3 = (int *)((-(uint)(bVar2 != 0) & 0xffff1611) + 0x8003838f);
  }
  if ((piVar3 != (int *)0x0) && (*piVar3 == 0x20c5048d)) {
    uVar4 = MmQueryAddressProtect(piVar3);
    MmSetAddressProtect(piVar3,4,4);
    *piVar3 = 0x28c5048d;
    MmSetAddressProtect(piVar3,4,uVar4);
  }
  return;
}
