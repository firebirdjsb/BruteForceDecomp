/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: 5DDE41611CF58912127F7EBB5DA80F5736EC6C8F424E8FA79DFE8DD9FD5992F3
 * Entry: 0x001e1f40, Ghidra index: 6741, label: FUN_001e1f40
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
#include "bf_x86_sso28.h"
/* TODO: Ghidra data labels have unresolved type and storage identities.
 * These declarations only allow syntax analysis; they are NOT verified types. */
extern uint32_t DAT_003bc150;
extern uint32_t DAT_003bc550;
extern uint32_t DAT_00400160;
extern uint32_t DAT_004002cc;
extern uint32_t *DAT_00443310;
extern uint32_t *DAT_00443314;
/* 0x001e1c3c/0x001e1ecc load DWORD [0x004698d4] for indirect calls.
 * ABI_UNVERIFIED: host pointer width and callee prototype remain unknown. */
extern code *DAT_004698d4;
extern uint32_t DAT_004698d8;
extern uint32_t *DAT_00469940;
/* WARNING: Removing unreachable block (ram,0x001e1bca) */
/* WARNING: Removing unreachable block (ram,0x001e1e60) */

bool FUN_001e1f40(void)

{
  char cVar1;
  undefined1 uVar2;
  uint uVar3;
  char *pcVar4;
  int in_EAX;
  int iVar5;
  undefined4 in_ECX;
  char *pcVar6;
  char *pcVar7;
  char *selected_string_bytes;
  char *local_5c;
  uint *local_58;
  undefined4 ***local_54;
  uint local_40;
  char *local_3c;
  /* The Ghidra body includes two tail-entry frames. Relative to each entry
   * ESP, 0x001e1b30 uses objects at -0x54, -0x38 and -0x1c;
   * 0x001e1dc0 uses -0x38 and -0x1c. Each is 28 guest bytes.
   * C local placement and implicit-register helper calls remain ABI_UNVERIFIED. */
  bf_x86_sso28 string_at_minus_54;
  bf_x86_sso28 string_at_minus_38;
  bf_x86_sso28 string_at_minus_1c;
  undefined4 uStack_c;
  undefined4 local_8;
  
  switch(in_ECX) {
  case 0:
    local_8 = 0x1a;
    uStack_c = 0x1e1fa6;
    uVar2 = FUN_001e1a40();
    local_8 = 0x1e1fb6;
    (**(code **)(*DAT_00469940 + 4))();
    return (bool)uVar2;
  case 1:
    local_58 = *(uint **)(in_EAX + 8);
    /* 0x001e1b48/4c/50: capacity=15, length=0, one NUL byte. */
    bf_x86_sso28_write_empty_fields(&string_at_minus_54);
    if ((uint *)*(char **)(in_EAX + 4) != local_58) {
      pcVar7 = *(char **)(in_EAX + 4) + 4;
      do {
        /* 0x001e1b6e/72/76 initialize the iteration clone at entry ESP-0x1c.
         * 0x001e1b6a supplies that object's address in ECX to 0x0001f4f0;
         * this register contract is not yet connected by the C helper ABI. */
        bf_x86_sso28_write_empty_fields(&string_at_minus_1c);
        FUN_0001f4f0(pcVar7 + -4,0,0xffffffff);
        FUN_0001f4f0(&DAT_00400160,0,0xffffffff);
        FUN_001e8a20();
        FUN_000784c0(0);
        FUN_000784c0(0);
        /* Restore the conditional cleanup omitted by Ghidra's unreachable-
         * block elimination: 0x001e1bbd-0x001e1bd3 tests clone capacity,
         * pushes its guest pointer and CALLs 0x002ea018. The legacy thunk
         * name denotes that dynamic entry, not an ordinary host free(). */
        if (bf_x86_sso28_capacity(&string_at_minus_1c) >= 16) {
          thunk_FUN_00237ec0(bf_x86_sso28_heap_word(&string_at_minus_1c));
        }
        /* 0x001e1bde/e2/e6 reset only the same three proven fields. */
        bf_x86_sso28_write_empty_fields(&string_at_minus_1c);
        pcVar6 = pcVar7;
        if (0xf < *(uint *)(pcVar7 + 0x14)) {
          pcVar6 = *(char **)pcVar7;
        }
        if (pcVar6 == (char *)0x0) {
          local_5c = (char *)0x0;
        }
        else {
          uVar3 = 0xffffffff;
          cVar1 = *pcVar6;
          while (cVar1 != '\0') {
            uVar3 = uVar3 >> 8 ^
                    *(uint *)(&DAT_003bc150 + (((byte)(&DAT_003bc550)[cVar1] ^ uVar3) & 0xff) * 4);
            pcVar4 = pcVar6 + 1;
            pcVar6 = pcVar6 + 1;
            cVar1 = *pcVar4;
          }
          local_5c = (char *)~uVar3;
        }
        if (DAT_004698d4 != (code *)0x0) {
          (*DAT_004698d4)(DAT_004698d8);
        }
        if (bf_x86_sso28_capacity(&string_at_minus_54) < 16) {
          /* 0x001e1c5c: LEA [ESP+0x1c] = object+4 at entry ESP-0x50.
           * The original inline region is 16 bytes, not a four-byte local. */
          pcVar6 = (char *)(string_at_minus_54.bytes + BF_X86_SSO28_STORAGE);
        }
        else {
          /* 0x001e1c56: read the heap-address DWORD from object+4.
           * ABI_UNVERIFIED: this legacy cast supplies no guest-to-host map. */
          pcVar6 = (char *)(uintptr_t)bf_x86_sso28_heap_word(&string_at_minus_54);
        }
        /* 0x001e1c62/66/6a: initialize the 28-byte temporary at ESPentry-0x38. */
        bf_x86_sso28_write_empty_fields(&string_at_minus_38);
        if (pcVar6 == (char *)0x0) {
          FUN_0001f5a0(0,0xffffffff);
        }
        else {
          pcVar4 = pcVar6;
          do {
            cVar1 = *pcVar4;
            pcVar4 = pcVar4 + 1;
          } while (cVar1 != '\0');
          FUN_0001fed0(pcVar6,(int)pcVar4 - (int)(pcVar6 + 1));
        }
        (**(code **)(*DAT_00443314 + 0xc))(DAT_00443314,&local_5c,&string_at_minus_38);
        if (bf_x86_sso28_capacity(&string_at_minus_38) >= 16) {
          /* 0x001e1cb3/b7/b8: guest pointer DWORD is the cleanup argument. */
          thunk_FUN_00237ec0(bf_x86_sso28_heap_word(&string_at_minus_38));
        }
        pcVar6 = pcVar7 + 0x18;
        bf_x86_sso28_write_empty_fields(&string_at_minus_38);
        pcVar7 = pcVar7 + 0x1c;
      } while ((uint *)pcVar6 != local_58);
      if (bf_x86_sso28_capacity(&string_at_minus_54) >= 16) {
        /* 0x001e1cde-0x001e1cf0: persistent-object cleanup via 0x002ea018. */
        thunk_FUN_00237ec0(bf_x86_sso28_heap_word(&string_at_minus_54));
      }
    }
    return true;
  case 2:
    local_8 = 0x1d;
    uStack_c = 0x1e1f5e;
    uVar2 = FUN_001e1a40();
    return (bool)uVar2;
  case 3:
    local_8 = 0x10;
    uStack_c = 0x1e1f70;
    uVar2 = FUN_001e1a40();
    return (bool)uVar2;
  case 4:
    break;
  case 5:
    uStack_c = 0x1e1f7b;
    iVar5 = FUN_00219520();
    return -1 < iVar5;
  case 6:
    local_8 = 0x15;
    uStack_c = 0x1e1fc7;
    uVar2 = FUN_001e1a40();
    return (bool)uVar2;
  default:
    return false;
  }
  local_3c = *(char **)(in_EAX + 8);
  /* 0x001e1dd8/dc/e0: persistent object at this entry's ESP-0x38. */
  bf_x86_sso28_write_empty_fields(&string_at_minus_38);
  if (*(char **)(in_EAX + 4) != local_3c) {
    pcVar7 = *(char **)(in_EAX + 4) + 4;
    do {
      local_54 = (undefined4 ***)0xffffffff;
      local_58 = (uint *)0x0;
      local_5c = pcVar7 + -4;
      /* 0x001e1e0b/0f/13: iteration clone; ECX at 0x001e1e07 is its
       * address. Implicit ECX/EBX/EAX helper interfaces remain unverified. */
      bf_x86_sso28_write_empty_fields(&string_at_minus_1c);
      FUN_0001f4f0();
      local_54 = (undefined4 ***)0xffffffff;
      local_58 = (uint *)0x0;
      local_5c = &DAT_004002cc;
      FUN_0001f4f0();
      local_54 = (undefined4 ***)0x1e1e36;
      FUN_001e8a20();
      local_54 = (undefined4 ***)0x0;
      local_58 = (uint *)0x1e1e47;
      FUN_000784c0();
      local_54 = (undefined4 ***)0x0;
      local_58 = (uint *)0x1e1e5a;
      FUN_000784c0();
      /* 0x001e1e5a-0x001e1e69: conditional clone cleanup, then the
       * 0x001e1e74/78/7c capacity/length/NUL reset. */
      if (bf_x86_sso28_capacity(&string_at_minus_1c) >= 16) {
        thunk_FUN_00237ec0(bf_x86_sso28_heap_word(&string_at_minus_1c));
      }
      bf_x86_sso28_write_empty_fields(&string_at_minus_1c);
      pcVar6 = pcVar7;
      if (0xf < *(uint *)(pcVar7 + 0x14)) {
        pcVar6 = *(char **)pcVar7;
      }
      if (pcVar6 == (char *)0x0) {
        local_40 = 0;
      }
      else {
        local_40 = 0xffffffff;
        cVar1 = *pcVar6;
        while (cVar1 != '\0') {
          local_40 = local_40 >> 8 ^
                     *(uint *)(&DAT_003bc150 +
                              (((byte)(&DAT_003bc550)[cVar1] ^ local_40) & 0xff) * 4);
          pcVar4 = pcVar6 + 1;
          pcVar6 = pcVar6 + 1;
          cVar1 = *pcVar4;
        }
        local_40 = ~local_40;
      }
      if (DAT_004698d4 != (code *)0x0) {
        local_54 = (undefined4 ***)DAT_004698d8;
        local_58 = (uint *)0x1e1ede;
        (*DAT_004698d4)();
      }
      if (bf_x86_sso28_capacity(&string_at_minus_38) < 16) {
        /* 0x001e1eeb: inline address at this entry's ESP-0x34. */
        selected_string_bytes = (char *)(string_at_minus_38.bytes + BF_X86_SSO28_STORAGE);
      }
      else {
        /* 0x001e1ee5: original DWORD address; host translation unresolved. */
        selected_string_bytes = (char *)(uintptr_t)bf_x86_sso28_heap_word(&string_at_minus_38);
      }
      local_58 = &local_40;
      local_5c = (char *)0x1e1f00;
      /* 0x001e1ef7/1efc push selected bytes, then the hash address.
       * Model those two observed words; the ECX receiver/native ABI is
       * still ABI_UNVERIFIED, as is the indirect target's prototype. */
      (**(code **)(*DAT_00443310 + 0xc))(&local_40,selected_string_bytes);
      pcVar6 = pcVar7 + 0x18;
      pcVar7 = pcVar7 + 0x1c;
    } while (pcVar6 != local_3c);
    if (bf_x86_sso28_capacity(&string_at_minus_38) >= 16) {
      /* 0x001e1f12-0x001e1f25 pushes the persistent guest pointer. */
      thunk_FUN_00237ec0(bf_x86_sso28_heap_word(&string_at_minus_38));
    }
  }
  return true;
}
