/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: 04E0100195B0BA32A95D28617140B4B799EA3BD68FBF673F75439C48434DF3A5
 * Entry: 0x002e3730, Ghidra index: 10410, label: FUN_002e3730
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
/* TODO: Ghidra data labels have unresolved type and storage identities.
 * These declarations only allow syntax analysis; they are NOT verified types. */
extern uint32_t DAT_0040e864;
undefined4 FUN_002e3730(void)

{
  int *piVar1;
  int *in_ECX;
  uint uVar2;
  uint uVar3;
  size_t __n;
  undefined4 *__dest;
  undefined4 *puVar4;
  uint local_4;
  
  __n = 0;
  local_4 = 0;
  if (in_ECX[8] != 0) {
    uVar2 = in_ECX[6];
    do {
      if (*(int *)(in_ECX[4] + 4 + (uVar2 % (uint)in_ECX[5]) * 0xc) == 0) break;
      __n = __n + *(int *)(in_ECX[4] + (uVar2 % (uint)in_ECX[5]) * 0xc);
      local_4 = local_4 + 1;
      uVar2 = uVar2 + 1;
    } while (local_4 < (uint)in_ECX[8]);
  }
  __dest = DAT_0040e864;
  if (in_ECX[3] + __n < (uint)in_ECX[2]) {
    __dest = (undefined4 *)*in_ECX;
  }
  _memmove((undefined1 *)((int)__dest + __n),(void *)*in_ECX,in_ECX[3]);
  _memmove(__dest,(void *)(*in_ECX + in_ECX[2]),__n);
  uVar2 = in_ECX[3] + __n;
  if ((uint)in_ECX[2] <= uVar2) {
    puVar4 = (undefined4 *)*in_ECX;
    for (uVar3 = uVar2 >> 2; uVar3 != 0; uVar3 = uVar3 - 1) {
      *puVar4 = *__dest;
      __dest = __dest + 1;
      puVar4 = puVar4 + 1;
    }
    for (uVar2 = uVar2 & 3; uVar2 != 0; uVar2 = uVar2 - 1) {
      *(undefined1 *)puVar4 = *(undefined1 *)__dest;
      __dest = (undefined4 *)((int)__dest + 1);
      puVar4 = (undefined4 *)((int)puVar4 + 1);
    }
  }
  uVar2 = 0;
  if (in_ECX[8] != 0) {
    do {
      if (uVar2 < local_4) {
        uVar3 = (in_ECX[6] + uVar2) % (uint)in_ECX[5];
        *(int *)(in_ECX[4] + 4 + uVar3 * 0xc) = *(int *)(in_ECX[4] + 4 + uVar3 * 0xc) - in_ECX[2];
      }
      else {
        piVar1 = (int *)(in_ECX[4] + 4 + ((in_ECX[6] + uVar2) % (uint)in_ECX[5]) * 0xc);
        *piVar1 = *piVar1 + __n;
      }
      uVar2 = uVar2 + 1;
    } while (uVar2 < (uint)in_ECX[8]);
  }
  in_ECX[3] = in_ECX[3] + __n;
  in_ECX[2] = 0;
  return 0;
}
