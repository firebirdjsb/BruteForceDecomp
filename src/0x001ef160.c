/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: 3D284BFD8859150F06A1D7178646C7ED81AD900F11B128DC6F7DEA281BE8BD08
 * Entry: 0x001ef160, Ghidra index: 6965, label: FUN_001ef160
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
/* TODO: Ghidra data labels have unresolved type and storage identities.
 * These declarations only allow syntax analysis; they are NOT verified types. */
extern uint32_t DAT_00469b3c;
undefined4 FUN_001ef160(int param_1)

{
  char cVar1;
  int in_ECX;
  
  if (*(int *)(in_ECX + 0x1c) == 6) {
    *(undefined4 *)(in_ECX + 0x1c) = 2;
    *(undefined4 *)(*(int *)(in_ECX + 0x10) + 0x30) = 60000;
    if (DAT_00469b3c != 0) {
      D3D8LTCG__D3DDevice_Clear(0,0,0xf3,0,0x3f800000,0);
    }
    D3D8LTCG__D3DDevice_Swap_0();
    if (DAT_00469b3c != 0) {
      D3D8LTCG__D3DDevice_Clear(0,0,0xf3,0,0x3f800000,0);
    }
    D3D8LTCG__D3DDevice_Swap_0();
    if (DAT_00469b3c != 0) {
      D3D8LTCG__D3DDevice_Clear(0,0,0xf3,0,0x3f800000,0);
    }
    D3D8LTCG__D3DDevice_Swap_0();
    cVar1 = FUN_002e5880();
    if (cVar1 == '\0') {
      FUN_00085120();
    }
    else {
      param_1 = *(int *)(param_1 + 0x18);
      FUN_00085190(&param_1);
    }
    if (DAT_00469b3c != 0) {
      D3D8LTCG__D3DDevice_Clear(0,0,0xf3,0,0x3f800000,0);
    }
    D3D8LTCG__D3DDevice_Swap_0();
    if (DAT_00469b3c != 0) {
      D3D8LTCG__D3DDevice_Clear(0,0,0xf3,0,0x3f800000,0);
    }
    D3D8LTCG__D3DDevice_Swap_0();
    if (DAT_00469b3c != 0) {
      D3D8LTCG__D3DDevice_Clear(0,0,0xf3,0,0x3f800000,0);
    }
    D3D8LTCG__D3DDevice_Swap_0();
  }
  return 0;
}
