/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: FA101AC385B92D3FF21B38C739210CD0C4BAA505F7AF181579F10D243055C4F3
 * Entry: 0x000f18f0, Ghidra index: 3011, label: FUN_000f18f0
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
/* TODO: Ghidra data labels have unresolved type and storage identities.
 * These declarations only allow syntax analysis; they are NOT verified types. */
extern uint32_t DAT_003bc934;
extern uint32_t DAT_003bc938;
extern uint32_t DAT_003bc93c;
extern uint32_t DAT_00469960;
extern uint32_t DAT_00469b58;
uint FUN_000f18f0(int param_1)

{
  byte bVar1;
  int iVar2;
  int unaff_ESI;
  uint uVar3;
  
  if (*(short *)(unaff_ESI + 0x208) != 0) {
    iVar2 = (**(code **)(**(int **)(DAT_00469b58 + 8) + 0x1a4))((int)*(short *)(unaff_ESI + 0x208));
    uVar3 = 0;
    if (iVar2 == 0) goto LAB_000f197f;
  }
  uVar3 = DAT_003bc93c;
  if (((*(int *)(unaff_ESI + 0x220) << 0x1c) >> 0x1c == DAT_003bc93c) &&
     (bVar1 = (byte)(*(uint *)(unaff_ESI + 0x20c) >> 6) ^ (byte)(DAT_00469960 >> 6),
     uVar3 = CONCAT31((uint3)(*(uint *)(unaff_ESI + 0x20c) >> 0xe),bVar1), (bVar1 & 1) == 0)) {
    if (((((*(uint *)(unaff_ESI + 0x21c) & 8) != 0) && (param_1 == *(int *)(unaff_ESI + 0x204))) &&
        ((int)*(uint *)(unaff_ESI + 0x21c) >> 0x1b == DAT_003bc938)) &&
       ((*(int *)(unaff_ESI + 0x220) << 0x18) >> 0x1c == DAT_003bc934)) {
      return 1;
    }
    return 0;
  }
LAB_000f197f:
  return uVar3 & 0xffffff00;
}
