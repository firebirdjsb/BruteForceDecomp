/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: 0073AD5BE4A4814F7F15FB5CE9C95D0E7EACAA5569BA8CB236D95838919CD423
 * Entry: 0x001403c0, Ghidra index: 4078, label: FUN_001403c0
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
#include <xmmintrin.h>
/* TODO: Ghidra data labels have unresolved type and storage identities.
 * These declarations only allow syntax analysis; they are NOT verified types. */
extern uint32_t DAT_00414da0;
extern uint32_t DAT_0041f2e0;
extern uint32_t PTR_FUN_0039c308;
extern uint32_t PTR_FUN_0039c35c;
float10 FUN_001403c0(int param_1,undefined4 param_2,uint param_3,uint param_4)

{
  int iVar1;
  undefined4 *puVar2;
  uint uVar3;
  int iVar4;
  /* The guest ESP+0x20 word holds F32 MAXSS output, not a pointer. */
  float guest_max_span = 0.0f;
  undefined4 *local_20;
  undefined4 *local_1c;
  int local_c;
  undefined4 *local_8;
  undefined4 local_4;
  
  local_c = 0;
  local_8 = (undefined4 *)0x0;
  local_4 = 0;
  iVar1 = FUN_00137080(param_1,param_3);
  if (iVar1 != 0) {
    local_20 = (undefined4 *)(local_c + 8);
    while (local_20 + -2 != local_8) {
      puVar2 = (undefined4 *)FUN_002ea01d(0x28);
      if (puVar2 == (undefined4 *)0x0) {
        puVar2 = (undefined4 *)0x0;
      }
      else {
        *puVar2 = &PTR_FUN_0039c308;
        puVar2[1] = 0;
        puVar2[4] = 0;
        puVar2[6] = 0;
        *(undefined1 *)(puVar2 + 7) = 0;
        puVar2[8] = param_2;
        DAT_0041f2e0 = DAT_0041f2e0 + 1;
        *puVar2 = &PTR_FUN_0039c35c;
      }
      puVar2[9] = local_20[1];
      puVar2[1] = *local_20;
      puVar2[2] = 0;
      if (puVar2[4] != param_3) {
        if (puVar2[4] != 0) {
          FUN_0008f6e0();
        }
        puVar2[4] = param_3;
        if ((param_3 != 0) && ((param_3 & 1) == 0)) {
          uVar3 = param_3 * 0x19660d + 0x3c6ef35f >> 0x15;
          puVar2[3] = *(undefined4 *)((uint8_t *)&DAT_00414da0 + uVar3 * 4U);
          *(undefined4 **)((uint8_t *)&DAT_00414da0 + uVar3 * 4U) = puVar2 + 3;
        }
      }
      if (puVar2[6] != param_4) {
        if (puVar2[6] != 0) {
          FUN_0008f6e0();
        }
        puVar2[6] = param_4;
        if ((param_4 != 0) && ((param_4 & 1) == 0)) {
          uVar3 = param_4 * 0x19660d + 0x3c6ef35f >> 0x15;
          puVar2[5] = *(undefined4 *)((uint8_t *)&DAT_00414da0 + uVar3 * 4U);
          *(undefined4 **)((uint8_t *)&DAT_00414da0 + uVar3 * 4U) = puVar2 + 5;
        }
      }
      /* XBE FLD [object+4]; FADD [param+0x28]; FSTP [object+4].
       * Transfer raw F32 bits without a numerical uint32 conversion. */
      float guest_field4;
      memcpy(&guest_field4, &puVar2[1], sizeof guest_field4);
      guest_field4 += *(float *)(param_1 + 0x28);
      memcpy(&puVar2[1], &guest_field4, sizeof guest_field4);
      iVar1 = *(int *)(param_1 + 0x30);
      local_1c = puVar2;
      iVar4 = FUN_000ff730(param_1 + 0x2c,iVar1,*(undefined4 *)(iVar1 + 4),&local_1c);
      FUN_000b2a50();
          *(int *)(iVar1 + 4) = iVar4;
      **(int **)(iVar4 + 4) = iVar4;
      /* Original FLD [object+8]; FADD [object+4]; FSTP stack F32. */
      float guest_field8;
      memcpy(&guest_field8, &puVar2[2], sizeof guest_field8);
      float guest_current_span = guest_field8 + guest_field4;
      local_20 = local_20 + 4;
      /* XBE MOVSS + MAXSS + MOVSS, preserving SSE NaN selection. */
      guest_max_span = _mm_cvtss_f32(_mm_max_ss(
          _mm_set_ss(guest_max_span), _mm_set_ss(guest_current_span)));
    }
  }
  if (local_c == 0) {
    return (float10)guest_max_span;
  }
                    /* WARNING: Subroutine does not return */
  thunk_FUN_00237ec0(local_c);
}
