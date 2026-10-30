/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: 401F8E7608886C83C0E9412F8A08E274502DAAB4F2B1A8013A6E3F09FCE11D2C
 * Entry: 0x000384a0, Ghidra index: 373, label: FUN_000384a0
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
extern void FUN_00056aa0(void);
extern uint32_t FUN_002ea01d(uint32_t guest_size);

void FUN_000384a0(undefined4 *param_1)

{
  undefined4 *puVar1;
  int in_EAX;
  undefined4 uVar2;
  uint uVar3;
  uint uVar4;
  
  if (((*(int *)(in_EAX + 0xc) + *(int *)(in_EAX + 0x10) & 3U) == 0) &&
     (*(uint *)(in_EAX + 8) <= *(int *)(in_EAX + 0x10) + 4U >> 2)) {
    FUN_00056aa0();
  }
  uVar4 = *(int *)(in_EAX + 0xc) + *(int *)(in_EAX + 0x10);
  uVar3 = uVar4 >> 2;
  if (*(uint *)(in_EAX + 8) <= uVar3) {
    uVar3 = uVar3 - *(uint *)(in_EAX + 8);
  }
  if (*(int *)(*(int *)(in_EAX + 4) + uVar3 * 4) == 0) {
    uVar2 = FUN_002ea01d(0x10);
    *(undefined4 *)(*(int *)(in_EAX + 4) + uVar3 * 4) = uVar2;
  }
  puVar1 = (undefined4 *)(*(int *)(*(int *)(in_EAX + 4) + uVar3 * 4) + (uVar4 & 3) * 4);
  if (puVar1 != (undefined4 *)0x0) {
    *puVar1 = *param_1;
  }
  *(int *)(in_EAX + 0x10) = *(int *)(in_EAX + 0x10) + 1;
  return;
}
