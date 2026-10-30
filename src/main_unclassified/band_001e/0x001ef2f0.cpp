/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: B1CB707A9579A17776D1E054E47DA6AE8976B92E44881E7B72717673D0EB3EB6
 * Entry: 0x001ef2f0, Ghidra index: 6966, label: FUN_001ef2f0
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
/* TODO: Ghidra data labels have unresolved type and storage identities.
 * These declarations only allow syntax analysis; they are NOT verified types. */
extern uint32_t DAT_00469b3c;
undefined4 FUN_001ef2f0(void)

{
  int in_ECX;
  
  if (*(char *)(in_ECX + 0x2e26) == '\0') {
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
    *(undefined1 *)(in_ECX + 0x2e26) = 1;
    FUN_00085120();
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
