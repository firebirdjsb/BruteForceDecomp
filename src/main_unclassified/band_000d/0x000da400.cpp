/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: E8D74015CC152FF3D2E5AD70031B677FAC9B7DA41B786BC4FE041D5F504C4679
 * Entry: 0x000da400, Ghidra index: 2686, label: FUN_000da400
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
/* TODO: Ghidra data labels have unresolved type and storage identities.
 * These declarations only allow syntax analysis; they are NOT verified types. */
extern uint FUN_0006e850(uint param_1);
extern undefined4 FUN_002385a0(void);
extern undefined4 FUN_0006a610(int *param_1);
extern void FUN_0006e940(void);

extern uint32_t *DAT_00469b54;
undefined4 FUN_000da400(int param_1,int param_2)

{
  int iVar1;
  char cVar2;
  int in_EAX;
  
  if (*(int *)(in_EAX + 0xa40) == 0) {
    return 0;
  }
  iVar1 = *(int *)(param_1 + 0x8c);
  cVar2 = (**(code **)(*DAT_00469b54 + 0x30))();
  if (cVar2 == '\0') {
    if ((char)(*(char *)(iVar1 + 0x124) << 1) < '\0') {
      return 0;
    }
    FUN_0006e850(0);
    FUN_002385a0();
    param_1 = 0;
    FUN_0006a610(&param_1);
    param_1 = 0x10;
    FUN_0006a610(&param_1);
    param_1 = 0;
    FUN_0006a610(&param_1);
    D3D8LTCG__D3DDevice_SetVertexShaderConstant1();
    param_2 = param_2 + 1;
    D3D8LTCG__D3DDevice_SetVertexShaderConstant1();
    return 1;
  }
  FUN_0006e940();
  return 0;
}
