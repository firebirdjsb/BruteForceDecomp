/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: 6F0DFA692F241AE1D5888DACA0E579145B1B7072A4FEC12440BCA1C2DA136A28
 * Entry: 0x00205350, Ghidra index: 7288, label: FUN_00205350
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
#include "../../contracts/bf_0001fc40_getter_operations.h"
#include <xmmintrin.h>
/* WARNING: Restarted to delay deadcode elimination for space: stack */

void FUN_00205350(int param_1,float param_2)

{
  int *piVar1;
  int iVar2;
  undefined4 *puVar3;
  undefined4 *local_e8;
  float local_e4;
  undefined8 local_e0;
  float scalar_at_s08;
  float axis_at_s18[3];
  float position_at_t1c[3];
  float base_at_t34[3];
  float getter_at_t1c[3], getter_at_t4c[3], getter_at_t34[3];
  float base_at_t40[3];
  float scaled_at_t10[3];
  float output_at_t28[3];
  const void *getter_source;
  const float *selected_getter;
  __m128 broadcast, packed_input, packed_product;
  float sum_y, sum_z;
  float10 retained_y;
  undefined4 local_90;
  undefined4 uStack_8c;
  undefined4 uStack_88;
  undefined4 uStack_84;
  undefined4 local_80;
  undefined4 uStack_7c;
  undefined4 uStack_78;
  undefined4 uStack_74;
  undefined4 local_70;
  undefined4 local_6c;
  undefined4 uStack_68;
  undefined4 uStack_64;
  undefined4 uStack_60;
  undefined4 local_5c;
  undefined4 uStack_58;
  undefined4 uStack_54;
  undefined4 uStack_50;
  undefined4 local_4c;
  
  iVar2 = *(int *)(param_1 + 0x9c);
  if ((((iVar2 != 0) && (iVar2 != -1)) && (piVar1 = *(int **)(iVar2 + 0x10), piVar1 != (int *)0x0))
     && (piVar1[0x19] != 0)) {
    if (piVar1 != (int *)0x0) {
      iVar2 = *piVar1;
      if (iVar2 == -0x27098f4) {
        FUN_00234dc0(piVar1,&param_2);
        return;
      }
      if (iVar2 == -0x16b14996) {
        /* 2053bc..2053dc: one m32fp at S+8, passed by address.
         * x87 arithmetic/rounding remains an unverified host C proxy. */
        scalar_at_s08 = (float)((float10)param_2 * (float10)0.017453292f);
        FUN_00234dc0(*(undefined4 *)(*(int *)(param_1 + 0x9c) + 0x10),&scalar_at_s08);
        return;
      }
      if ((iVar2 != 0x1b0dc6c7) && (iVar2 == -0x1c41e972)) {
        /* 205403..20546d: actual twelve-byte output at S+0x18.
         * Zero words and axis replacement are original stores, not defaults. */
        memset(axis_at_s18, 0, sizeof(axis_at_s18));
        iVar2 = *(int *)(param_1 + 0x44);
        if (iVar2 == 0 || iVar2 == 1 || iVar2 == 2) {
          memcpy(&axis_at_s18[iVar2], &param_2, 4);
        }
        FUN_00234dc0(*(undefined4 *)(*(int *)(param_1 + 0x9c) + 0x10),axis_at_s18);
        return;
      }
    }
    return;
  }
  piVar1 = (int *)FUN_001fb020();
  if (piVar1 == (int *)0x0) {
    return;
  }
  iVar2 = *(int *)(param_1 + 0x40);
  if ((iVar2 == 2) || (iVar2 == 3)) {
    local_e4 = 0.0;
    local_e0 = 0x200000001;
    FUN_0020e020(param_2 * 0.017453292);
    if (*(int *)(param_1 + 0x40) == 2) {
      puVar3 = (undefined4 *)FUN_002334b0();
      local_6c = *puVar3;
      uStack_68 = puVar3[1];
      uStack_64 = puVar3[2];
      uStack_60 = puVar3[3];
      local_4c = puVar3[8];
      local_5c = puVar3[4];
      uStack_58 = puVar3[5];
      uStack_54 = puVar3[6];
      uStack_50 = puVar3[7];
    }
    else {
      puVar3 = (undefined4 *)FUN_002334b0();
      local_6c = *puVar3;
      uStack_68 = puVar3[1];
      uStack_64 = puVar3[2];
      uStack_60 = puVar3[3];
      local_4c = puVar3[8];
      local_5c = puVar3[4];
      uStack_58 = puVar3[5];
      uStack_54 = puVar3[6];
      uStack_50 = puVar3[7];
    }
    local_e8 = &local_90;
    local_90 = local_6c;
    uStack_8c = uStack_68;
    uStack_88 = uStack_64;
    uStack_84 = uStack_60;
    local_80 = local_5c;
    uStack_7c = uStack_58;
    uStack_78 = uStack_54;
    uStack_74 = uStack_50;
    local_70 = local_4c;
    (**(code **)(*piVar1 + 0x4c))(&local_6c);
    return;
  }
  if (iVar2 == 0) {
    iVar2 = (**(code **)(*piVar1 + 0x40))();
    /* 2054c3..205530: the first word uses FLD/FSTP; the other
     * two position words are raw MOV copies into the T+0x1c buffer. */
    position_at_t1c[0] = (float)(float10)*(float *)(iVar2 + 0x24);
    memcpy(&position_at_t1c[2], (const void *)(iVar2 + 0x2c), 4);
    memcpy(&position_at_t1c[1], (const void *)(iVar2 + 0x28), 4);
    memcpy(&base_at_t34[2], (const void *)(param_1 + 0x90), 4);
    memcpy(&base_at_t34[0], (const void *)(param_1 + 0x88), 4);
    memcpy(&base_at_t34[1], (const void *)(param_1 + 0x8c), 4);
    iVar2 = *(int *)(param_1 + 0x44);
    if (iVar2 == 0 || iVar2 == 1 || iVar2 == 2) {
      position_at_t1c[iVar2] =
          (float)((float10)base_at_t34[iVar2] + (float10)param_2);
    }
    piVar1 = (int *)FUN_001fb020();
    (**(code **)(*piVar1 + 0x48))(position_at_t1c);
    return;
  }
  if (iVar2 != 1) {
    return;
  }
  /* 2055a8 returns the source in EAX; the virtual ECX/return interface
   * still depends on the unbound original register ABI. The scoped producer
   * calls below model only observed memory effects, not Xbox entry calls.
   * Getter EAX/ECX/EDX and flags are overwritten before caller consumption;
   * ESI/EDI retain the source/object across all three original calls. */
  getter_source = (const void *)(uintptr_t)(**(code **)(*piVar1 + 0x40))();
  bf_0001fd10_produce(getter_at_t1c, getter_source);
  bf_0001fc40_produce(getter_at_t4c, getter_source);
  bf_0001fdd0_produce(getter_at_t34, getter_source);
  /* 2055d5..205601: copy object +0x90, +0x8c, +0x88 bits, then
   * consume the axis at +0x44. These are three four-byte float lanes. */
  memcpy(&base_at_t40[2], (const void *)(param_1 + 0x90), 4);
  memcpy(&base_at_t40[1], (const void *)(param_1 + 0x8c), 4);
  memcpy(&base_at_t40[0], (const void *)(param_1 + 0x88), 4);
  iVar2 = *(int *)(param_1 + 0x44);
  if (iVar2 == 0 || iVar2 == 1 || iVar2 == 2) {
    selected_getter = iVar2 == 0 ? getter_at_t1c :
                      iVar2 == 1 ? getter_at_t4c : getter_at_t34;
    /* 205628..20571c: MOVSS/SHUFPS broadcast; MOVSS/MOVHPS gives
     * [X,+0,Y,Z]. MULPS executes all four lanes, including scalar*zero.
     * Store lanes 0,2,3 as exactly twelve bytes at original T+0x10. */
    broadcast = _mm_load_ss(&param_2);
    broadcast = _mm_shuffle_ps(broadcast, broadcast, 0);
    packed_input = _mm_load_ss(selected_getter);
    packed_input = _mm_loadh_pi(packed_input, (const __m64 *)(selected_getter + 1));
    packed_product = _mm_mul_ps(broadcast, packed_input);
    _mm_store_ss(&scaled_at_t10[0], packed_product);
    _mm_storeh_pi((__m64 *)&scaled_at_t10[1], packed_product);
    /* 20564d..20575e: x87 loads Y before Z, then forms Z, Y, X;
     * each sum spills m32fp. X operand order differs on axis zero.
     * Host long double does not establish x87 exception/status behavior. */
    retained_y = (float10)scaled_at_t10[1];
    sum_z = (float)((float10)scaled_at_t10[2] + (float10)base_at_t40[2]);
    sum_y = (float)(retained_y + (float10)base_at_t40[1]);
    if (iVar2 == 0) {
      output_at_t28[0] = (float)((float10)base_at_t40[0] + (float10)scaled_at_t10[0]);
    }
    else {
      output_at_t28[0] = (float)((float10)scaled_at_t10[0] + (float10)base_at_t40[0]);
    }
    memcpy(&output_at_t28[1], &sum_y, 4);
    memcpy(&output_at_t28[2], &sum_z, 4);
  }
  /* Other axes reach 205762 with the twelve output bytes unestablished.
   * Deliberately retain that unresolved original-stack path; do not zero it. */
  (**(code **)(*piVar1 + 0x48))(output_at_t28);
  return;
}
