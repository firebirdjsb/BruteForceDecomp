/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: 8120FA4D8ED59C2546F535BCAE0628E9FA6EAE5508F4A1E3FE454F9D31A93026
 * Entry: 0x003711f0, Ghidra index: 13378, label: FUN_003711f0
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
#include "bf_xbox_d3d_state_globals_x86.h"
/* TODO: Ghidra data labels have unresolved type and storage identities.
 * These declarations only allow syntax analysis; they are NOT verified types. */
extern uint32_t DAT_0037ec88;
void FUN_003711f0(void)

{
  undefined4 *puVar1;
  uint uVar2;
  undefined4 *unaff_EDI;
  
  uVar2 = D3D8__D3DRS_MultiSampleMask << 0x10 | D3D8__D3DRS_SampleAlpha;
  if (((char)((uint)unaff_EDI[2] >> 8) < '\0') && (D3D8__D3DRS_MultiSampleAntiAlias != 0)) {
    uVar2 = uVar2 | 1;
  }
  puVar1 = (undefined4 *)*unaff_EDI;
  if ((undefined4 *)unaff_EDI[1] <= puVar1) {
    puVar1 = (undefined4 *)D3D8LTCG__D3D_MakeRequestedSpace_8(DAT_0037ec88 >> 1,DAT_0037ec88);
  }
  *puVar1 = 0x41d7c;
  puVar1[1] = uVar2;
  *unaff_EDI = puVar1 + 2;
  return;
}
