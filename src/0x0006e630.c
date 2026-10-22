/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: D5C4C8683B1DB800C016B2B5EFDDC23F8655ECF2C0DE518998237EFB62DC92AC
 * Entry: 0x0006e630, Ghidra index: 1241, label: FUN_0006e630
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
/* TODO: Ghidra data labels have unresolved type and storage identities.
 * These declarations only allow syntax analysis; they are NOT verified types. */
extern uint32_t PTR_DAT_004021a0;
undefined4 FUN_0006e630(uint *param_1)

{
  int iVar1;
  uint uVar2;
  int iVar3;
  int *piVar4;
  uint in_ECX;
  uint uVar5;
  
  iVar1 = *(int *)(D3D8__D3D_g_pDevice + 0x398 + ((in_ECX & 0xffff) >> 8) * 4);
  iVar3 = (in_ECX & 0xff) * 0x10;
  piVar4 = (int *)(iVar3 + iVar1);
  if (*(int *)(iVar3 + 0xc + iVar1) == -1) {
    if (*piVar4 == *(int *)(D3D8__D3D_g_pDevice + 0x2c)) {
      D3D8LTCG__D3D_SetFence(0);
    }
    return 0;
  }
  uVar2 = piVar4[2];
  uVar5 = (in_ECX & 0xffff) >> 5;
  *(uint *)(PTR_DAT_004021a0 + uVar5 * 4) =
       *(uint *)(PTR_DAT_004021a0 + uVar5 * 4) & ~(1 << ((byte)in_ECX & 0x1f));
  *param_1 = -(uint)(3 < uVar2) & uVar2;
  return 1;
}
