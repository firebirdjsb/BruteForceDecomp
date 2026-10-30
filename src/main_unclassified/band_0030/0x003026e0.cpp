/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: 5E8ED4F69677999A132D5A96BBE3EED141E859A44C729BD5DC33F099D7E2FC24
 * Entry: 0x003026e0, Ghidra index: 11083, label: FUN_003026e0
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
/* TODO: Ghidra data labels have unresolved type and storage identities.
 * These declarations only allow syntax analysis; they are NOT verified types. */
extern uint32_t PTR_FUN_0038e438;
void FUN_003026e0(void)

{
  undefined4 in_EAX;
  uint uVar1;
  uint uVar2;
  uint uVar3;
  undefined4 *unaff_ESI;
  
  *(undefined2 *)(unaff_ESI + 4) = 1;
  *(undefined2 *)(unaff_ESI + 2) = 0;
  *(undefined2 *)((int)unaff_ESI + 10) = 0;
  unaff_ESI[3] = 0;
  unaff_ESI[1] = in_EAX;
  *unaff_ESI = &PTR_FUN_0038e438;
  *(undefined2 *)((int)unaff_ESI + 0x1e) = 0;
  *(ushort *)(unaff_ESI + 7) = 0;
  unaff_ESI[8] = 0;
  *(undefined2 *)((int)unaff_ESI + 0x26) = 0;
  *(ushort *)(unaff_ESI + 9) = 0;
  unaff_ESI[10] = 0;
  unaff_ESI[6] = 0;
  uVar2 = (uint)*(ushort *)(unaff_ESI + 7);
  uVar1 = *(ushort *)((int)unaff_ESI + 0x1e) + 0x100;
  if (uVar2 < uVar1) {
    uVar3 = uVar2 * 2;
    if (uVar2 == 0) {
      uVar3 = 2;
    }
    if (uVar3 < uVar1) {
      do {
        uVar3 = uVar3 * 2;
      } while ((int)uVar3 < (int)uVar1);
    }
    FUN_003066c0(4);
  }
  uVar1 = *(ushort *)((int)unaff_ESI + 0x26) + 0x100;
  uVar2 = (uint)*(ushort *)(unaff_ESI + 9);
  if (uVar2 < uVar1) {
    uVar3 = uVar2 * 2;
    if (uVar2 == 0) {
      uVar3 = 2;
    }
    if (uVar3 < uVar1) {
      do {
        uVar3 = uVar3 * 2;
      } while ((int)uVar3 < (int)uVar1);
    }
    FUN_003066c0(4);
  }
  return;
}
