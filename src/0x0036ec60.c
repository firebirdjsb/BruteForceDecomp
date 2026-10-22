/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: 377F2AE349E5DEDA4FB27903870604442DDCED95E81EDA714093E34F620A7702
 * Entry: 0x0036ec60, Ghidra index: 13314, label: Direct3D_CreateDevice_16__LTCG_eax_BehaviorFlags_ecx_ppReturnedDeviceInterface
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
/* TODO: Ghidra data labels have unresolved type and storage identities.
 * These declarations only allow syntax analysis; they are NOT verified types. */
extern uint32_t DAT_0037bd40;
extern uint32_t DAT_0037bd48;
extern uint32_t DAT_0037ec88;
extern uint32_t DAT_0037ec8c;
extern uint32_t _DAT_0037c23c;
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int D3D8LTCG__Direct3D_CreateDevice_16__LTCG_eax_BehaviorFlags_ecx_ppReturnedDeviceInterface(void)

{
  uint in_EAX;
  int iVar1;
  undefined4 *in_ECX;
  int iVar2;
  undefined4 *puVar3;
  undefined4 in_stack_00000010;
  
  if (DAT_0037ec8c == 0) {
    DAT_0037ec8c = 0x80000;
  }
  if (DAT_0037ec88 == 0) {
    DAT_0037ec88 = 0x8000;
  }
  DAT_0037bd48 = DAT_0037bd48 | in_EAX & 0x10;
  D3D8__D3D_g_pDevice = &DAT_0037bd40;
  _DAT_0037c23c = 1;
  iVar1 = FUN_003764c0(&DAT_0037bd40,in_stack_00000010);
  if (iVar1 < 0) {
    FUN_00376e10();
    if (in_ECX != (undefined4 *)0x0) {
      *in_ECX = 0;
    }
    puVar3 = &DAT_0037bd40;
    for (iVar2 = 0x810; iVar2 != 0; iVar2 = iVar2 + -1) {
      *puVar3 = 0;
      puVar3 = puVar3 + 1;
    }
    D3D8__D3D_g_pDevice = (undefined4 *)0x0;
    return iVar1;
  }
  if (in_ECX != (undefined4 *)0x0) {
    *in_ECX = &DAT_0037bd40;
  }
  return 0;
}
