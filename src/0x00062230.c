/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: C81423F4A97CF0299A44D5257E4C4BBE9B5AF7FFA9B8F3D63C90C557D70EC7DD
 * Entry: 0x00062230, Ghidra index: 1051, label: FUN_00062230
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
#include "bf_recovered_function_names.h"
/* TODO: Ghidra data labels have unresolved type and storage identities.
 * These declarations only allow syntax analysis; they are NOT verified types. */
extern uint32_t DAT_0037ec88;
/* Xbox x86 mov esi, [0x0037dd88] loads a pointer VALUE. */
#include "bf_xbox_d3d_device_x86.h"
undefined4 bf_emit_two_word_d3d_command(undefined4 param_1)

{
  undefined4 *puVar1;
  undefined4 *puVar2;
  
  FUN_002386d0();
  puVar1 = D3D8__D3D_g_pDevice;
  FUN_003736b0();
  puVar2 = (undefined4 *)*puVar1;
  if ((undefined4 *)puVar1[1] <= puVar2) {
    puVar2 = (undefined4 *)D3D8LTCG__D3D_MakeRequestedSpace_8(DAT_0037ec88 >> 1,DAT_0037ec88);
  }
  *puVar2 = 0x417fc;
  puVar2[1] = param_1;
  *puVar1 = puVar2 + 2;
  puVar1[2] = puVar1[2] | 0x800;
  return 0;
}
