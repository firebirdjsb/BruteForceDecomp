/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: C7A59C855728A403E7180E1D4276043560D74C00DD219EC9CC19991F11EF19F8
 * Entry: 0x001f45a0, Ghidra index: 7033, label: FUN_001f45a0
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
#include "bf_x86_float_lane.h"
/* TODO: Ghidra data labels have unresolved type and storage identities.
 * These declarations only allow syntax analysis; they are NOT verified types. */
extern uint32_t DAT_00443310;
void FUN_001f45a0(void)

{
  uint32_t in_EAX;
  uint32_t in_ECX;
  uint32_t unaff_ESI;
  uint32_t *object;
  uint32_t *piVar9;
  uint32_t *allocation;
  uint32_t *record;
  uint32_t record_address;
  uint32_t cursor;
  uint32_t dispatch_table;
  undefined4 uVar10;
  int32_t iVar12;
  int32_t local_18;
  int32_t local_14;
  float input_scalar;
  float step;
  float x_base;
  float y_base;
  float y_count;
  float row_value;
  float column_value;
  int32_t row_bound;

  /* ABI_UNVERIFIED: these three entry registers are implicit inputs, not
   * initialized C locals. Guest addresses stay 32-bit words. The uintptr_t
   * casts below retain the draft's unverified guest-to-host mapping; they
   * do not implement guest memory or recover the ECX/EBX call contracts. */
  object = (uint32_t *)(uintptr_t)unaff_ESI;
  piVar9 = (uint32_t *)(uintptr_t)in_EAX;

  /* MOV m32 at 0x1f45a9/0x1f45ac stores raw EAX/ECX at +0x20/+0x1c.
   * FLD/FDIV [EAX+8] reads binary32, unlike the signed FILD counts at
   * input +0/+4 below. Word indexes here each cover exactly four bytes. */
  object[8] = in_EAX;
  object[7] = in_ECX;
  input_scalar = bf_x86_word_to_f32(piVar9[2]);
  bf_x86_store_f32_word(&object[0], 1.0f / input_scalar);
  input_scalar = bf_x86_word_to_f32(piVar9[2]);
  bf_x86_store_f32_word(&object[1], input_scalar * bf_x86_word_to_f32(UINT32_C(0x3fb504f3)));
  input_scalar = bf_x86_word_to_f32(piVar9[2]);
  step = input_scalar * 16.0f;
  bf_x86_store_f32_word(&object[2], step);
  bf_x86_store_f32_word(&object[3], 1.0f / step);
  bf_x86_store_f32_word(&object[4], bf_x86_word_to_f32(object[2]) * 0.5f);

  /* IMUL/SHL/ADD retain the low 32 bits for the allocation byte count. */
  iVar12 = (int32_t)(piVar9[1] * piVar9[0]);
  allocation = (uint32_t *)(uintptr_t)(uint32_t)thunk_FUN_002ea01d(
      ((uint32_t)iVar12 << 6) + UINT32_C(4));
  if (allocation == (uint32_t *)0) {
    record_address = 0;
  }
  else {
    record_address = (uint32_t)(uintptr_t)allocation + UINT32_C(4);
    allocation[0] = (uint32_t)iVar12;
    /* 0x1f4607 is PUSH imm32 0x001f3720, not a host label address.
     * The callee's complete callback/stack interface remains unverified. */
    FUN_0001fe40(record_address,0x40,iVar12,UINT32_C(0x001f3720));
  }

  piVar9 = (uint32_t *)(uintptr_t)object[8];
  object[6] = record_address; /* MOV [ESI+0x18],EDI at 0x1f462a. */
  step = bf_x86_word_to_f32(object[2]);
  /* FILD signed count -> FMUL -> FMUL -0.5 -> FADD half-step,
   * then FSTP m32fp at 0x1f4642/0x1f4663. Exact x87 precision,
   * rounding and exception behavior remain unresolved in this C draft. */
  x_base = (float)(int32_t)piVar9[0] * step * -0.5f + step * 0.5f;
  local_18 = 0;
  y_count = (float)(int32_t)piVar9[1];
  object[5] = 0; /* MOV dword [ESI+0x14],0, not a typed float field. */
  row_bound = (int32_t)piVar9[1];
  cursor = piVar9[0xf]; /* MOV EBX,[EAX+0x3c] at 0x1f4658. */
  y_base = y_count * step * -0.5f + step * 0.5f;
  if (0 < row_bound) {
    do {
      local_14 = 0;
      row_value = (float)local_18 * bf_x86_word_to_f32(object[2]) + y_base;
      if (0 < *(int32_t *)(uintptr_t)object[8]) {
        do {
          record = (uint32_t *)(uintptr_t)record_address;
          record[6] = unaff_ESI; /* MOV [EDI+0x18],ESI. */
          record[0xe] = cursor; /* MOV [EDI+0x38],EBX. */
          /* Original dispatch: ECX=[0x443310], EDX=[ECX], CALL [EDX+0x54].
           * Load each table entry as a guest dword; native code(), ECX and
           * all callee side effects still have ABI_UNVERIFIED status. */
          dispatch_table = *(uint32_t *)(uintptr_t)DAT_00443310;
          uVar10 = (uint32_t)((code *)(uintptr_t)*(uint32_t *)(uintptr_t)
              (dispatch_table + UINT32_C(0x54)))(cursor + UINT32_C(0x10c));
          *(uint32_t *)(uintptr_t)(cursor + UINT32_C(0x110)) = uVar10;
          column_value = (float)local_14 * bf_x86_word_to_f32(object[2]);
          record[1] = bf_x86_f32_word(row_value); /* MOV m32 at +4. */
          local_14 = local_14 + 1;
          record_address += UINT32_C(0x40); /* ADD EDI,0x40 at 0x1f46bd. */
          cursor += UINT32_C(0x134); /* ADD EBX,0x134 at 0x1f46c4. */
          bf_x86_store_f32_word(&record[0], column_value + x_base);
        } while (local_14 < *(int32_t *)(uintptr_t)object[8]);
      }
      local_18 = local_18 + 1;
    } while (local_18 < *(int32_t *)(uintptr_t)(object[8] + UINT32_C(4)));
  }
  dispatch_table = *(uint32_t *)(uintptr_t)DAT_00443310;
  uVar10 = (uint32_t)((code *)(uintptr_t)*(uint32_t *)(uintptr_t)
      (dispatch_table + UINT32_C(0x20)))(object[8] + UINT32_C(0xc));
  /* Reload [ESI+0x20] after the call, as at 0x1f4701. */
  *(uint32_t *)(uintptr_t)(object[8] + UINT32_C(0x10)) = uVar10;
  if (0 < iVar12) {
    do {
      /* 0x1f4710..15 sets EBX=[ESI+0x18]+EDI before CALL 0x1f3bd0.
       * ABI_UNVERIFIED: existing void call cannot convey that register.
       * Do not invent a stack argument or an initialized substitute. */
      FUN_001f3bd0();
      iVar12 = iVar12 + -1;
    } while (iVar12 != 0);
  }
  /* Final MOV m32 zero stores: +0x3c/+0x54/+0x68/+0x6c. */
  object[0xf] = 0;
  object[0x15] = 0;
  object[0x1a] = 0;
  object[0x1b] = 0;
  /* 0x1f4730 also returns ESI in EAX; the original draft's void signature
   * is retained until its caller/register interface is reviewed. */
  return;
}
