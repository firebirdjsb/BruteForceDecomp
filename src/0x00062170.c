/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: 6393E988F920BFAAEA64E8BE4AB963B1A36AEF3B60F1D911A1C190043EEA9485
 * Entry: 0x00062170, Ghidra index: 1049, label: FUN_00062170
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
#include "bf_recovered_function_names.h"
/* TODO: Ghidra data labels have unresolved type and storage identities.
 * These declarations only allow syntax analysis; they are NOT verified types. */
extern uint32_t DAT_0037ec88;
/* x86 instruction mov esi,[0x0037dd88]: global holds a pointer VALUE. */
#include "bf_xbox_d3d_device_x86.h"
undefined4 bf_emit_three_word_d3d_command(undefined4 param_1,int param_2,int param_3,int param_4)

{
  undefined4 *puVar1;
  int *piVar2;
  
  puVar1 = D3D8__D3D_g_pDevice;
  piVar2 = (int *)*D3D8__D3D_g_pDevice;
  if ((int *)D3D8__D3D_g_pDevice[1] <= piVar2) {
    piVar2 = (int *)D3D8LTCG__D3D_MakeRequestedSpace_8(DAT_0037ec88 >> 1,DAT_0037ec88);
  }
  *piVar2 = param_2 * 8 + 0x81880;
  piVar2[1] = param_3;
  piVar2[2] = param_4;
  *puVar1 = piVar2 + 3;
  return 0;
}
