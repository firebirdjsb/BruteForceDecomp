/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: BF0F360B12C3F62C738603A5CF9B6A6A3DADEF0A2124DF060670236657278B3B
 * Entry: 0x000858e0, Ghidra index: 1570, label: FUN_000858e0
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
extern void FUN_000860e0(void);
extern uint32_t FUN_002ea01d(uint32_t guest_size);

void FUN_000858e0(undefined2 *param_1)

{
  undefined2 *puVar1;
  int in_EAX;
  undefined4 uVar2;
  uint uVar3;
  uint uVar4;
  
  if (((*(int *)(in_EAX + 0xc) + *(int *)(in_EAX + 0x10) & 7U) == 0) &&
     (*(uint *)(in_EAX + 8) <= *(int *)(in_EAX + 0x10) + 8U >> 3)) {
    FUN_000860e0();
  }
  uVar4 = *(int *)(in_EAX + 0xc) + *(int *)(in_EAX + 0x10);
  uVar3 = uVar4 >> 3;
  if (*(uint *)(in_EAX + 8) <= uVar3) {
    uVar3 = uVar3 - *(uint *)(in_EAX + 8);
  }
  if (*(int *)(*(int *)(in_EAX + 4) + uVar3 * 4) == 0) {
    uVar2 = FUN_002ea01d(0x10);
    *(undefined4 *)(*(int *)(in_EAX + 4) + uVar3 * 4) = uVar2;
  }
  puVar1 = (undefined2 *)(*(int *)(*(int *)(in_EAX + 4) + uVar3 * 4) + (uVar4 & 7) * 2);
  if (puVar1 != (undefined2 *)0x0) {
    *puVar1 = *param_1;
  }
  *(int *)(in_EAX + 0x10) = *(int *)(in_EAX + 0x10) + 1;
  return;
}
