/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: 94E7BB8FE42F95CA97360C37887252916387FD97888EED275D6AE81AA34E93FF
 * Entry: 0x0033bff8, Ghidra index: 12542, label: FUN_0033bff8
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
/* TODO: Ghidra data labels have unresolved type and storage identities.
 * These declarations only allow syntax analysis; they are NOT verified types. */
extern uint32_t DAT_004b0948;
extern uint32_t DAT_004b094a;
extern uint32_t DAT_004b094c;
extern uint32_t DAT_004b0950;
void FUN_0033bff8(void)

{
  uint uVar1;
  uint uVar2;
  int *in_ECX;
  int iVar3;
  uint uVar4;
  int local_10;
  uint local_c;
  
  iVar3 = *in_ECX * 10;
  uVar1 = *(ushort *)(&DAT_004b094c + iVar3) + 5;
  uVar2 = (*(ushort *)(&DAT_004b0950 + iVar3) + 6 + (uint)*(ushort *)(&DAT_004b094c + iVar3)) *
          (uint)*(ushort *)(&DAT_004b094a + iVar3) + 0x18;
  in_ECX[6] = uVar2;
  uVar4 = 500 - uVar2 % 500;
  if (uVar4 < uVar1) {
    in_ECX[6] = uVar2 + uVar4;
    uVar4 = 500;
  }
  local_10 = in_ECX[6];
  in_ECX[7] = local_10;
  local_c = *(ushort *)(&DAT_004b0948 + iVar3) * uVar1;
  uVar2 = uVar4;
  if (uVar4 <= local_c && local_c - uVar4 != 0) {
    do {
      local_10 = local_10 + uVar4;
      local_c = local_c + (uVar4 % uVar1 - uVar4);
      uVar2 = 500;
      uVar4 = 500;
    } while (500 < local_c);
    in_ECX[7] = local_10;
  }
  in_ECX[7] = in_ECX[7] + uVar2;
  return;
}
