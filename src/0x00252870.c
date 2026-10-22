/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: 43A76A44B0F397A06933890850C8ECAFC372AFF29DB341740C142DC1330DE4DD
 * Entry: 0x00252870, Ghidra index: 8381, label: FUN_00252870
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
/* TODO: Ghidra data labels have unresolved type and storage identities.
 * These declarations only allow syntax analysis; they are NOT verified types. */
extern char s_incorrect_data_check_00406428[];
extern char s_incorrect_header_check_00406440[];
extern char s_invalid_window_size_00406458[];
extern char s_need_dictionary_00404f90[];
extern char s_unknown_compression_method_0040646c[];
extern uint32_t switchD_002528b1_caseD_1[];
extern uint32_t switchD_002528b1_caseD_3[];
extern uint32_t switchD_002528b1_caseD_4[];
extern uint32_t switchD_002528b1_caseD_5[];
extern uint32_t switchD_002528b1_caseD_8[];
extern uint32_t switchD_002528b1_caseD_a[];
extern uint32_t switchD_002528b1_caseD_b[];
extern uint32_t switchD_002528b1_caseD_c[];
extern uint32_t switchD_002528b1_default[];
uint FUN_00252870(void)

{
  byte bVar1;
  undefined4 uVar2;
  undefined4 *puVar3;
  int *in_EAX;
  uint uVar4;
  int in_EDX;
  uint uVar5;
  
  if (((in_EAX != (int *)0x0) && ((undefined4 *)in_EAX[7] != (undefined4 *)0x0)) && (*in_EAX != 0))
  {
    uVar2 = *(undefined4 *)in_EAX[7];
    uVar5 = 0xfffffffb;
    uVar4 = (in_EDX != 4) - 1 & 0xfffffffb;
    do {
      switch(uVar2) {
      case 0:
        if (in_EAX[1] == 0) {
          return uVar5;
        }
        in_EAX[2] = in_EAX[2] + 1;
        in_EAX[1] = in_EAX[1] + -1;
        *(uint *)(in_EAX[7] + 4) = (uint)*(byte *)*in_EAX;
        puVar3 = (undefined4 *)in_EAX[7];
        uVar2 = puVar3[1];
        *in_EAX = *in_EAX + 1;
        if (((byte)uVar2 & 0xf) == 8) {
          if (((uint)puVar3[1] >> 4) + 8 <= (uint)puVar3[4]) {
            *puVar3 = 1;
            uVar5 = uVar4;
            goto switchD_002528b1_caseD_1;
          }
          *puVar3 = 0xd;
          in_EAX[6] = (int)s_invalid_window_size_00406458;
          goto LAB_00252adc;
        }
        *puVar3 = 0xd;
        in_EAX[6] = (int)s_unknown_compression_method_0040646c;
        *(undefined4 *)(in_EAX[7] + 4) = 5;
        uVar5 = uVar4;
        break;
      case 1:
switchD_002528b1_caseD_1:
        if (in_EAX[1] == 0) {
          return uVar5;
        }
        in_EAX[1] = in_EAX[1] + -1;
        in_EAX[2] = in_EAX[2] + 1;
        bVar1 = *(byte *)*in_EAX;
        puVar3 = (undefined4 *)in_EAX[7];
        *in_EAX = (int)((byte *)*in_EAX + 1);
        if ((puVar3[1] * 0x100 + (uint)bVar1) % 0x1f != 0) {
          *puVar3 = 0xd;
          in_EAX[6] = (int)s_incorrect_header_check_00406440;
          goto LAB_00252adc;
        }
        if ((bVar1 & 0x20) == 0) {
          *puVar3 = 7;
          uVar5 = uVar4;
          break;
        }
        *(undefined4 *)in_EAX[7] = 2;
        uVar5 = uVar4;
      case 2:
        if (in_EAX[1] != 0) {
          in_EAX[2] = in_EAX[2] + 1;
          in_EAX[1] = in_EAX[1] + -1;
          *(uint *)(in_EAX[7] + 8) = (uint)*(byte *)*in_EAX << 0x18;
          *in_EAX = *in_EAX + 1;
          *(undefined4 *)in_EAX[7] = 3;
          uVar5 = uVar4;
switchD_002528b1_caseD_3:
          if (in_EAX[1] != 0) {
            in_EAX[1] = in_EAX[1] + -1;
            in_EAX[2] = in_EAX[2] + 1;
            *(uint *)(in_EAX[7] + 8) = *(int *)(in_EAX[7] + 8) + (uint)*(byte *)*in_EAX * 0x10000;
            *in_EAX = *in_EAX + 1;
            *(undefined4 *)in_EAX[7] = 4;
            uVar5 = uVar4;
switchD_002528b1_caseD_4:
            if (in_EAX[1] != 0) {
              in_EAX[1] = in_EAX[1] + -1;
              in_EAX[2] = in_EAX[2] + 1;
              *(uint *)(in_EAX[7] + 8) = *(int *)(in_EAX[7] + 8) + (uint)*(byte *)*in_EAX * 0x100;
              *in_EAX = *in_EAX + 1;
              *(undefined4 *)in_EAX[7] = 5;
              uVar5 = uVar4;
switchD_002528b1_caseD_5:
              if (in_EAX[1] != 0) {
                in_EAX[1] = in_EAX[1] + -1;
                in_EAX[2] = in_EAX[2] + 1;
                *(int *)(in_EAX[7] + 8) = *(int *)(in_EAX[7] + 8) + (uint)*(byte *)*in_EAX;
                *in_EAX = *in_EAX + 1;
                in_EAX[0xc] = ((undefined4 *)in_EAX[7])[2];
                *(undefined4 *)in_EAX[7] = 6;
                return 2;
              }
            }
          }
        }
        return uVar5;
      case 3:
        goto switchD_002528b1_caseD_3;
      case 4:
        goto switchD_002528b1_caseD_4;
      case 5:
        goto switchD_002528b1_caseD_5;
      case 6:
        *(undefined4 *)in_EAX[7] = 0xd;
        in_EAX[6] = (int)s_need_dictionary_00404f90;
        *(undefined4 *)(in_EAX[7] + 4) = 0;
        return 0xfffffffe;
      case 7:
        uVar5 = FUN_0027e8f0(*(undefined4 *)(in_EAX[7] + 0x14));
        if (uVar5 == 0xfffffffd) {
          *(undefined4 *)in_EAX[7] = 0xd;
          *(undefined4 *)(in_EAX[7] + 4) = 0;
          uVar5 = 0xfffffffd;
        }
        else {
          if (uVar5 == 0) {
            uVar5 = uVar4;
          }
          if (uVar5 != 1) {
            return uVar5;
          }
          FUN_0027e7f0();
          puVar3 = (undefined4 *)in_EAX[7];
          if (puVar3[3] == 0) {
            *puVar3 = 8;
            uVar5 = uVar4;
            goto switchD_002528b1_caseD_8;
          }
          *puVar3 = 0xc;
          uVar5 = uVar4;
        }
        break;
      case 8:
switchD_002528b1_caseD_8:
        if (in_EAX[1] == 0) {
          return uVar5;
        }
        in_EAX[1] = in_EAX[1] + -1;
        in_EAX[2] = in_EAX[2] + 1;
        *(uint *)(in_EAX[7] + 8) = (uint)*(byte *)*in_EAX << 0x18;
        *in_EAX = *in_EAX + 1;
        *(undefined4 *)in_EAX[7] = 9;
        uVar5 = uVar4;
      case 9:
        if (in_EAX[1] == 0) {
          return uVar5;
        }
        in_EAX[1] = in_EAX[1] + -1;
        in_EAX[2] = in_EAX[2] + 1;
        *(uint *)(in_EAX[7] + 8) = *(int *)(in_EAX[7] + 8) + (uint)*(byte *)*in_EAX * 0x10000;
        *in_EAX = *in_EAX + 1;
        *(undefined4 *)in_EAX[7] = 10;
        uVar5 = uVar4;
switchD_002528b1_caseD_a:
        if (in_EAX[1] == 0) {
          return uVar5;
        }
        in_EAX[1] = in_EAX[1] + -1;
        in_EAX[2] = in_EAX[2] + 1;
        *(uint *)(in_EAX[7] + 8) = *(int *)(in_EAX[7] + 8) + (uint)*(byte *)*in_EAX * 0x100;
        *in_EAX = *in_EAX + 1;
        *(undefined4 *)in_EAX[7] = 0xb;
        uVar5 = uVar4;
switchD_002528b1_caseD_b:
        if (in_EAX[1] == 0) {
          return uVar5;
        }
        in_EAX[1] = in_EAX[1] + -1;
        in_EAX[2] = in_EAX[2] + 1;
        *(int *)(in_EAX[7] + 8) = *(int *)(in_EAX[7] + 8) + (uint)*(byte *)*in_EAX;
        puVar3 = (undefined4 *)in_EAX[7];
        *in_EAX = *in_EAX + 1;
        if (puVar3[1] == puVar3[2]) {
          *(undefined4 *)in_EAX[7] = 0xc;
switchD_002528b1_caseD_c:
          return 1;
        }
        *puVar3 = 0xd;
        in_EAX[6] = (int)s_incorrect_data_check_00406428;
LAB_00252adc:
        *(undefined4 *)(in_EAX[7] + 4) = 5;
        uVar5 = uVar4;
        break;
      case 10:
        goto switchD_002528b1_caseD_a;
      case 0xb:
        goto switchD_002528b1_caseD_b;
      case 0xc:
        goto switchD_002528b1_caseD_c;
      case 0xd:
        return 0xfffffffd;
      default:
        goto switchD_002528b1_default;
      }
      uVar2 = *(undefined4 *)in_EAX[7];
    } while( true );
  }
switchD_002528b1_default:
  return 0xfffffffe;
}
