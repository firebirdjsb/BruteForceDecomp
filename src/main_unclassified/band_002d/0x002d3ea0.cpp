/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: 0009DD5B3714EB37B42E34E24F727AD60DA8313DBB1BB2238937AC53BB22BC20
 * Entry: 0x002d3ea0, Ghidra index: 10205, label: FUN_002d3ea0
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
#include <xmmintrin.h>
/* MOV r32 reads guest addresses as raw four-byte words from the retained
 * float* record. These copies do not provide host guest-address translation. */
static uint32_t bf_002d3ea0_guest_word(const float *slot)
{
  uint32_t word;
  memcpy(&word,slot,sizeof word);
  return word;
}

static void bf_002d3ea0_store_word(float *slot,uint32_t word)
{
  memcpy(slot,&word,sizeof word);
}

/* Each observed triple ADDPS uses MOVSS/MOVHPS lanes [x,0,y,z] and
 * writes exactly four plus eight bytes. Keep the source operand order. */
static void bf_002d3ea0_add3(float *output,const float *left,const float *right)
{
  __m128 first = _mm_load_ss(left);
  __m128 second;
  first = _mm_loadh_pi(first,(const __m64 *)(left + 1));
  second = _mm_load_ss(right);
  second = _mm_loadh_pi(second,(const __m64 *)(right + 1));
  first = _mm_add_ps(first,second);
  _mm_store_ss(output,first);
  _mm_storeh_pi((__m64 *)(output + 1),first);
}
/* TODO: Ghidra data labels have unresolved type and storage identities.
 * These declarations only allow syntax analysis; they are NOT verified types. */
extern uint32_t _DAT_00469f40;
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_002d3ea0(float *param_1,float *param_2,float param_3,int param_4,float param_5)

{
  int *piVar1;
  uint32_t node_address;
  float fVar4;
  float fVar5;
  float fVar6;
  float *pfVar7;
  int iVar8;
  float10 fVar9;
  float local_20;
  /* Original ESP+0x24/+0x28/+0x2c/+0x30, produced before 0x2d4124. */
  float local_10[4];
  
  fVar4 = param_1[0x3f];
  *param_1 = (_DAT_00469f40 + param_5) * 1.2;
  param_1[3] = param_3;
  /* 0x2d3efa..2d3f24: raw +ec/+f0 pointers, four-byte output copies. */
  bf_002d3ea0_store_word(param_2,bf_002d3ea0_guest_word(param_1 + 0x3b));
  bf_002d3ea0_store_word(param_2 + 1,bf_002d3ea0_guest_word(param_1 + 0x3c));
  node_address = bf_002d3ea0_guest_word(param_1 + 0x3b);
  piVar1 = (int *)(uintptr_t)(
      *(const uint32_t *)(uintptr_t)(node_address + UINT32_C(0xc)) + UINT32_C(0x54));
  *piVar1 = *piVar1 + 1;
  /* 0x2d3f2b..2d3f4a: ADD wraps at 32 bits; MOV stores pointer bits. */
  bf_002d3ea0_store_word(param_1 + 7,
      bf_002d3ea0_guest_word(param_1 + 0x3b) + UINT32_C(0xfc));
  bf_002d3ea0_store_word(param_1 + 8,
      bf_002d3ea0_guest_word(param_1 + 0x3c) + UINT32_C(0xfc));
  /* 0x2d3f51..2d3f91: node +9c plus +7c -> caller +24. */
  node_address = bf_002d3ea0_guest_word(param_1 + 0x3b);
  bf_002d3ea0_add3(param_1 + 9,
      (const float *)(uintptr_t)(node_address + UINT32_C(0x9c)),
      (const float *)(uintptr_t)(node_address + UINT32_C(0x7c)));
  /* 0x2d3f99..2d3fdc: node +ac plus +8c -> caller +44. */
  node_address = bf_002d3ea0_guest_word(param_1 + 0x3b);
  bf_002d3ea0_add3(param_1 + 0x11,
      (const float *)(uintptr_t)(node_address + UINT32_C(0xac)),
      (const float *)(uintptr_t)(node_address + UINT32_C(0x8c)));
  /* 0x2d3fe4..2d4024: second node +9c plus +7c -> caller +34. */
  node_address = bf_002d3ea0_guest_word(param_1 + 0x3c);
  bf_002d3ea0_add3(param_1 + 0xd,
      (const float *)(uintptr_t)(node_address + UINT32_C(0x9c)),
      (const float *)(uintptr_t)(node_address + UINT32_C(0x7c)));
  /* 0x2d402c..2d406f: second node +ac plus +8c -> caller +54. */
  node_address = bf_002d3ea0_guest_word(param_1 + 0x3c);
  bf_002d3ea0_add3(param_1 + 0x15,
      (const float *)(uintptr_t)(node_address + UINT32_C(0xac)),
      (const float *)(uintptr_t)(node_address + UINT32_C(0x8c)));
  param_1[6] = 0.0;
  FUN_002d34c0(param_1);
  fVar6 = param_1[0x2a];
  /* 0x2d4090: MOV loads the +10c output pointer as one guest word. */
  pfVar7 = (float *)(uintptr_t)bf_002d3ea0_guest_word(param_1 + 0x43);
  fVar5 = param_1[0x2b];
  *pfVar7 = param_1[0x29];
  pfVar7[1] = fVar6;
  iVar8 = 0;
  pfVar7[2] = fVar5;
  /* ABI_UNVERIFIED: 0x2d40ae passes param_1 in ESI to this call. */
  fVar9 = (float10)FUN_002d4b60();
  /* 0x2d40c1/0x2d40fa/0x2d4168/0x2d4202/0x2d424e/0x2d42b9
   * load the +108 pointer with MOV r32, not a float conversion. */
  pfVar7 = (float *)(uintptr_t)bf_002d3ea0_guest_word(param_1 + 0x42);
  if (*pfVar7 * param_1[0x29] + pfVar7[1] * param_1[0x2a] + pfVar7[2] * param_1[0x2b] <= -0.0001) {
    FUN_002d3560();
    param_1[0x33] = 0.0;
    param_1[0x32] = 0.0;
    param_1[0x31] = 0.0;
    pfVar7 = (float *)(uintptr_t)bf_002d3ea0_guest_word(param_1 + 0x42);
    fVar6 = -(param_1[0x29] * *pfVar7 + param_1[0x2b] * pfVar7[2] + param_1[0x2a] * pfVar7[1]);
    fVar4 = SQRT(1.0 - (1.0 - fVar4) * (1.0 / ((float)param_4 * 0.5 + 1.0))) * fVar6;
    for (; (0.0 < fVar6 && (iVar8 < 100)); iVar8 = iVar8 + 1) {
      FUN_002d4800(param_1,(float)(fVar9 * (float10)0.1));
      FUN_002d34c0(param_1);
      pfVar7 = (float *)(uintptr_t)bf_002d3ea0_guest_word(param_1 + 0x42);
      fVar6 = -(param_1[0x29] * *pfVar7 + param_1[0x2a] * pfVar7[1] + param_1[0x2b] * pfVar7[2]);
      FUN_002d3560();
    }
    local_20 = fVar6 + SQRT((float)param_4) * 0.01 + fVar4;
    pfVar7 = (float *)(uintptr_t)bf_002d3ea0_guest_word(param_1 + 0x42);
    fVar4 = pfVar7[1];
    fVar5 = pfVar7[2];
    param_1[0x2d] = *pfVar7 * -1.0;
    param_1[0x2e] = fVar4 * -1.0;
    param_1[0x2f] = fVar5 * -1.0;
    if ((0.0 < local_20) && (iVar8 != 100)) {
      FUN_002d4800(param_1,0x3f800000);
      FUN_002d34c0(param_1);
      pfVar7 = (float *)(uintptr_t)bf_002d3ea0_guest_word(param_1 + 0x42);
      fVar6 = *pfVar7 * param_1[0x29] + param_1[0x2a] * pfVar7[1] + param_1[0x2b] * pfVar7[2] +
              fVar6;
      if (ABS(fVar6) <= 0.0001) {
        local_20 = 0.0;
      }
      else {
        local_20 = local_20 / fVar6;
      }
      FUN_002d3850(param_1);
      FUN_002d4800(param_1,local_20);
    }
    FUN_002d3970(param_1,param_1 + 0x2d,0);
  }
  else {
    local_10[3] = 0.0f;
    pfVar7 = (float *)(uintptr_t)bf_002d3ea0_guest_word(param_1 + 0x42);
    local_10[1] = -pfVar7[1];
    local_10[2] = -pfVar7[2];
    local_10[0] = -*pfVar7;
    FUN_002d3970(param_1,local_10,1);
    if (10 < param_4) {
      param_1[3] = 0.0;
    }
  }
  /* 0x2d4337/0x2d4352: these call arguments are raw guest words. */
  FUN_002c62f0(bf_002d3ea0_guest_word(param_1 + 0x3b),param_1 + 0x11,param_1 + 9);
  FUN_002c62f0(bf_002d3ea0_guest_word(param_1 + 0x3c),param_1 + 0x15,param_1 + 0xd);
  /* ABI_UNVERIFIED: original 0x2d4363 also supplies param_1 in EAX. */
  FUN_002d44f0(param_2);
  if (*(char *)(uintptr_t)(bf_002d3ea0_guest_word(param_1 + 0x3c) + UINT32_C(0x65)) != '\0' ||
      *(char *)(uintptr_t)(bf_002d3ea0_guest_word(param_1 + 0x3b) + UINT32_C(0x65)) != '\0')
  {
    node_address = bf_002d3ea0_guest_word(param_1 + 0x3b);
    piVar1 = (int *)(uintptr_t)(
        *(const uint32_t *)(uintptr_t)(node_address + UINT32_C(0xc)) + UINT32_C(0x6c));
    *piVar1 = *piVar1 + 1;
    piVar1 = (int *)(uintptr_t)bf_002d3ea0_guest_word(param_1 + 0x3b);
    *(char *)((int)piVar1 + 0x65) = '\x01' - (char)((*piVar1 << 0x1c) >> 0x1e);
    /* 0x2d43c4..2d43e3: node +8c plus +ac, stored back at +8c. */
    bf_002d3ea0_add3((float *)(piVar1 + 0x23),
        (const float *)(piVar1 + 0x23),(const float *)(piVar1 + 0x2b));
    /* 0x2d4400..2d441f: node +7c plus +9c, stored back at +7c. */
    bf_002d3ea0_add3((float *)(piVar1 + 0x1f),
        (const float *)(piVar1 + 0x1f),(const float *)(piVar1 + 0x27));
    piVar1[0x2d] = 0;
    piVar1[0x2c] = 0;
    piVar1[0x2b] = 0;
    piVar1[0x29] = 0;
    piVar1[0x28] = 0;
    piVar1[0x27] = 0;
    /* 0x2d4437: copy the guest node pointer as exactly four bytes. */
    bf_002d3ea0_store_word(param_2,(uint32_t)(uintptr_t)piVar1);
    piVar1 = (int *)(uintptr_t)bf_002d3ea0_guest_word(param_1 + 0x3c);
    *(char *)((int)piVar1 + 0x65) = '\x01' - (char)((*piVar1 << 0x1c) >> 0x1e);
    /* 0x2d446e..2d448d: second node +8c plus +ac -> +8c. */
    bf_002d3ea0_add3((float *)(piVar1 + 0x23),
        (const float *)(piVar1 + 0x23),(const float *)(piVar1 + 0x2b));
    /* 0x2d44aa..2d44c9: second node +7c plus +9c -> +7c. */
    bf_002d3ea0_add3((float *)(piVar1 + 0x1f),
        (const float *)(piVar1 + 0x1f),(const float *)(piVar1 + 0x27));
    piVar1[0x2d] = 0;
    piVar1[0x2c] = 0;
    piVar1[0x2b] = 0;
    piVar1[0x29] = 0;
    piVar1[0x28] = 0;
    piVar1[0x27] = 0;
    /* 0x2d44e1: four-byte guest pointer store, no numeric float cast. */
    bf_002d3ea0_store_word(param_2 + 1,(uint32_t)(uintptr_t)piVar1);
  }
  return;
}
