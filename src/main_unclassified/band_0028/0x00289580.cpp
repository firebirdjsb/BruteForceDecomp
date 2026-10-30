/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: EBD556974F99A6B245EDC0556039B5F3B2C1B6D531C2F2F751B2801665656924
 * Entry: 0x00289580, Ghidra index: 9127, label: FUN_00289580
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
/* TODO: Ghidra data labels have unresolved type and storage identities.
 * These declarations only allow syntax analysis; they are NOT verified types. */
extern uint32_t *DAT_00469888;
uint FUN_00289580(void)

{
  uint uVar1;
  uint *puVar2;
  int iVar3;
  void *__src;
  undefined4 *puVar4;
  undefined4 *unaff_ESI;
  
  iVar3 = ((int)(*DAT_00469888 - DAT_00469888[1]) >> 4) - DAT_00469888[3];
  __src = (void *)(*DAT_00469888 + iVar3 * -0x10);
  _memmove((void *)((int)__src + 0x10),__src,iVar3 * 0x10);
  if (DAT_00469888[2] <= *DAT_00469888) {
    FUN_0028a460();
  }
  puVar2 = DAT_00469888;
  *DAT_00469888 = *DAT_00469888 + 0x10;
  puVar4 = (undefined4 *)(puVar2[3] * 0x10 + puVar2[1]);
  *puVar4 = *unaff_ESI;
  puVar4[1] = unaff_ESI[1];
  puVar4[2] = unaff_ESI[2];
  puVar4[3] = unaff_ESI[3];
  uVar1 = puVar2[3];
  puVar2[3] = uVar1 + 1;
  return uVar1 + 1;
}
