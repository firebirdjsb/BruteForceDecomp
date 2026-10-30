/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: 3C7991C628AAE65C61140E9EFB721A2CAB180E4936483D83B9C48FFF23653345
 * Entry: 0x0022d330, Ghidra index: 7704, label: FUN_0022d330
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
/* TODO: Ghidra data labels have unresolved type and storage identities.
 * These declarations only allow syntax analysis; they are NOT verified types. */
extern uint32_t DAT_00394320;
extern uint32_t PTR_FUN_00394340;
extern uint32_t PTR_FUN_0039adec;
extern uint32_t PTR_FUN_0039efd0;
extern uint32_t PTR_FUN_0039efec;
extern uint32_t PTR_LAB_00394328;
extern uint32_t PTR_LAB_00394334;
extern uint32_t PTR_LAB_0039433c;
extern uint32_t PTR_LAB_003948e8;
extern uint32_t PTR_LAB_0039a8c0;
extern uint32_t PTR_LAB_0039efdc;
void FUN_0022d330(void)

{
  int in_EAX;
  undefined4 *puVar1;
  int iVar2;
  int *piVar3;
  undefined4 *unaff_ESI;
  undefined4 *local_8;
  int local_4;
  
  if (in_EAX != 0) {
    unaff_ESI[0x13] = DAT_00394320;
    unaff_ESI[0xe0] = PTR_FUN_0039efec;
    unaff_ESI[0xdf] = PTR_LAB_0039efdc;
    unaff_ESI[0xe0] = PTR_FUN_0039efd0;
  }
  FUN_00149f10();
  unaff_ESI[0x74] = &PTR_LAB_003948e8;
  unaff_ESI[0x76] = 0;
  unaff_ESI[0x78] = 0x42a00000;
  unaff_ESI[0x77] = 0x42a00000;
  unaff_ESI[0x79] = 2;
  *unaff_ESI = &PTR_FUN_00394340;
  unaff_ESI[0x12] = &PTR_FUN_0039adec;
  unaff_ESI[0x1a] = &PTR_LAB_0039a8c0;
  unaff_ESI[0x74] = &PTR_LAB_0039433c;
  *(undefined ***)(*(int *)(unaff_ESI[0x13] + 4) + 0x4c + (int)unaff_ESI) = &PTR_LAB_00394334;
  *(undefined ***)(*(int *)(unaff_ESI[0x13] + 4) + 0x50 + (int)unaff_ESI) = &PTR_LAB_00394328;
  *(int *)(*(int *)(unaff_ESI[0x13] + 4) + 0x48 + (int)unaff_ESI) =
       *(int *)(unaff_ESI[0x13] + 4) + -0x330;
  unaff_ESI[0xd6] = 0;
  unaff_ESI[0xd8] = 0;
  puVar1 = unaff_ESI + 0xdb;
  iVar2 = 2;
  do {
    *puVar1 = 0;
    puVar1 = puVar1 + 2;
    iVar2 = iVar2 + -1;
  } while (iVar2 != 0);
  *(byte *)(unaff_ESI + 0x89) = *(byte *)(unaff_ESI + 0x89) & 0xf9;
  unaff_ESI[0x86] = 0;
  unaff_ESI[0x87] = 0;
  unaff_ESI[0xa3] = 0;
  unaff_ESI[0xa4] = 0;
  unaff_ESI[0x81] = 0;
  unaff_ESI[0x83] = 0;
  unaff_ESI[0x7a] = 0;
  unaff_ESI[0x7d] = 0;
  unaff_ESI[0x7c] = 0;
  unaff_ESI[0x7b] = 0;
  *(byte *)(unaff_ESI + 0x89) = *(byte *)(unaff_ESI + 0x89) & 0x46;
  local_8 = unaff_ESI + 0x84;
  unaff_ESI[0x75] = unaff_ESI;
  *(byte *)((int)unaff_ESI + 0x225) = *(byte *)((int)unaff_ESI + 0x225) & 0xfe;
  unaff_ESI[0xd9] = 0;
  unaff_ESI[0x8a] = 0;
  unaff_ESI[0x88] = 0;
  puVar1 = unaff_ESI + 0x98;
  piVar3 = unaff_ESI + 0xdb;
  local_4 = 2;
  do {
    *local_8 = 0xffffffff;
    if (*piVar3 != 0) {
      FUN_0008f6e0();
      *piVar3 = 0;
    }
    puVar1[1] = 0;
    *puVar1 = 0;
    puVar1[-1] = 0;
    puVar1[7] = 0;
    puVar1[6] = 0;
    puVar1[5] = 0;
    local_8 = local_8 + 1;
    puVar1[-0xb] = 0;
    puVar1[-0xc] = 0;
    puVar1[-0xd] = 0;
    puVar1[-5] = 0;
    puVar1[-6] = 0;
    puVar1[-7] = 0;
    piVar3 = piVar3 + 2;
    puVar1 = puVar1 + 3;
    local_4 = local_4 + -1;
  } while (local_4 != 0);
  unaff_ESI[0x7f] = 0;
  unaff_ESI[0x80] = 0;
  unaff_ESI[0x82] = 0;
  *(byte *)((int)unaff_ESI + 0x225) = *(byte *)((int)unaff_ESI + 0x225) & 0xf9;
  *(byte *)((int)unaff_ESI + 0x71) = *(byte *)((int)unaff_ESI + 0x71) | 0x10;
  *(byte *)(unaff_ESI + 0x89) = *(byte *)(unaff_ESI + 0x89) & 0xbf;
  return;
}
