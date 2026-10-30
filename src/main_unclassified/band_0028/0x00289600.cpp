/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: DF374B4A2B70F23AE26F2DBF7FC7C44BD1EC007926402B668F7A5FC9E50D5D3C
 * Entry: 0x00289600, Ghidra index: 9128, label: FUN_00289600
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
/* TODO: Ghidra data labels have unresolved type and storage identities.
 * These declarations only allow syntax analysis; they are NOT verified types. */
extern uint32_t *DAT_00469888;
uint FUN_00289600(void)

{
  undefined4 *puVar1;
  uint uVar2;
  uint *puVar3;
  int iVar4;
  void *__src;
  undefined4 *puVar5;
  
  iVar4 = ((int)(*DAT_00469888 - DAT_00469888[1]) >> 4) - DAT_00469888[3];
  __src = (void *)(*DAT_00469888 + iVar4 * -0x10);
  _memmove((void *)((int)__src + 0x10),__src,iVar4 * 0x10);
  if (DAT_00469888[2] <= *DAT_00469888) {
    FUN_0028a460();
  }
  puVar3 = DAT_00469888;
  puVar1 = (undefined4 *)*DAT_00469888;
  *DAT_00469888 = (uint)puVar1;
  puVar5 = (undefined4 *)(puVar3[3] * 0x10 + puVar3[1]);
  *puVar5 = *puVar1;
  puVar5[1] = puVar1[1];
  puVar5[2] = puVar1[2];
  puVar5[3] = puVar1[3];
  uVar2 = puVar3[3];
  puVar3[3] = uVar2 + 1;
  return uVar2 + 1;
}
