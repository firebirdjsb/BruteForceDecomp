/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: 8EA5BD3BF2914CEAF1E83982CE1D6B2563E1B8A017D615E9772F2B49B4DBD443
 * Entry: 0x00296110, Ghidra index: 9334, label: FUN_00296110
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
/* TODO: Ghidra data labels have unresolved type and storage identities.
 * These declarations only allow syntax analysis; they are NOT verified types. */
extern uint32_t DAT_003b6c30;
extern uint32_t DAT_00469888;
extern uint32_t *PTR_DAT_003b6c3c;
extern char s___100s__last_token_read_____50s__00404560[];
extern char s_input_ends_inside_a__if_004044fc[];
uint FUN_00296110(void)

{
  byte bVar1;
  int *piVar2;
  uint *in_EAX;
  uint uVar3;
  uint uVar4;
  int iVar5;
  uint uVar6;
  char *pcVar7;
  float10 fVar8;
  undefined1 local_54 [84];
  
  *(undefined4 *)(DAT_00469888 + 0x28) = *(undefined4 *)(DAT_00469888 + 0x20);
  uVar3 = *in_EAX;
  do {
    switch(uVar3) {
    default:
      uVar3 = *in_EAX;
      if (uVar3 != 0x5f) {
        if (DAT_003b6c30 < 2) {
          uVar3 = *(ushort *)(PTR_DAT_003b6c3c + uVar3 * 2) & 0x103;
        }
        else {
          uVar3 = FUN_002eba73(uVar3,0x103);
        }
        if (uVar3 == 0) {
          uVar3 = *in_EAX;
          if (DAT_003b6c30 < 2) {
            uVar6 = (byte)PTR_DAT_003b6c3c[uVar3 * 2] & 0x20;
          }
          else {
            uVar6 = FUN_002eba73(uVar3,0x20);
          }
          if (uVar6 != 0) {
            FUN_00295940();
          }
          FUN_0029d580(*in_EAX);
          *(int *)in_EAX[6] = *(int *)in_EAX[6] + -1;
          piVar2 = (int *)in_EAX[6];
          if (-1 < *piVar2) {
            bVar1 = *(byte *)piVar2[1];
            piVar2[1] = (int)((byte *)piVar2[1] + 1);
            *in_EAX = (uint)bVar1;
            return uVar3;
          }
          uVar6 = (*(code *)piVar2[2])(piVar2);
          *in_EAX = uVar6;
          return uVar3;
        }
      }
      do {
        FUN_0029d580(*in_EAX);
        *(int *)in_EAX[6] = *(int *)in_EAX[6] + -1;
        piVar2 = (int *)in_EAX[6];
        if (*piVar2 < 0) {
          uVar3 = (*(code *)piVar2[2])(piVar2);
        }
        else {
          uVar3 = (uint)*(byte *)piVar2[1];
          piVar2[1] = (int)((byte *)piVar2[1] + 1);
        }
        iVar5 = DAT_003b6c30;
        *in_EAX = uVar3;
        if (iVar5 < 2) {
          uVar3 = *(ushort *)(PTR_DAT_003b6c3c + uVar3 * 2) & 0x107;
        }
        else {
          uVar3 = FUN_002eba73(uVar3,0x107);
        }
      } while ((uVar3 != 0) || (*in_EAX == 0x5f));
      FUN_0029d580(0);
      uVar3 = FUN_00294810();
      if (0x103 < (int)*(uint *)(uVar3 + 4)) {
        return *(uint *)(uVar3 + 4);
      }
      in_EAX[4] = uVar3;
      return 0x114;
    case 9:
    case 0xd:
    case 0x20:
      *(int *)in_EAX[6] = *(int *)in_EAX[6] + -1;
      piVar2 = (int *)in_EAX[6];
      if (*piVar2 < 0) {
        uVar3 = (*(code *)piVar2[2])(piVar2);
        *in_EAX = uVar3;
      }
      else {
        bVar1 = *(byte *)piVar2[1];
        piVar2[1] = (int)((byte *)piVar2[1] + 1);
        *in_EAX = (uint)bVar1;
      }
      break;
    case 10:
      FUN_00295c60();
      break;
    case 0x22:
    case 0x27:
      uVar3 = *in_EAX;
      FUN_0029d580(uVar3);
      *(int *)in_EAX[6] = *(int *)in_EAX[6] + -1;
      piVar2 = (int *)in_EAX[6];
      if (*piVar2 < 0) {
        uVar6 = (*(code *)piVar2[2])(piVar2);
      }
      else {
        uVar6 = (uint)*(byte *)piVar2[1];
        piVar2[1] = (int)((byte *)piVar2[1] + 1);
      }
      *in_EAX = uVar6;
      goto joined_r0x00296515;
    case 0x2d:
      FUN_0029d580(*in_EAX);
      *(int *)in_EAX[6] = *(int *)in_EAX[6] + -1;
      piVar2 = (int *)in_EAX[6];
      if (*piVar2 < 0) {
        uVar3 = (*(code *)piVar2[2])(piVar2);
      }
      else {
        uVar3 = (uint)*(byte *)piVar2[1];
        piVar2[1] = (int)((byte *)piVar2[1] + 1);
      }
      *in_EAX = uVar3;
      if (uVar3 != 0x2d) {
        return 0x2d;
      }
      do {
        *(int *)in_EAX[6] = *(int *)in_EAX[6] + -1;
        piVar2 = (int *)in_EAX[6];
        if (*piVar2 < 0) {
          uVar3 = (*(code *)piVar2[2])(piVar2);
        }
        else {
          uVar3 = (uint)*(byte *)piVar2[1];
          piVar2[1] = (int)((byte *)piVar2[1] + 1);
        }
        *in_EAX = uVar3;
      } while ((uVar3 != 10) && (uVar3 != 0xffffffff));
      *(undefined4 *)(DAT_00469888 + 0x28) = *(undefined4 *)(DAT_00469888 + 0x20);
      break;
    case 0x2e:
      FUN_0029d580(*in_EAX);
      *(int *)in_EAX[6] = *(int *)in_EAX[6] + -1;
      piVar2 = (int *)in_EAX[6];
      if (*piVar2 < 0) {
        uVar3 = (*(code *)piVar2[2])(piVar2);
      }
      else {
        uVar3 = (uint)*(byte *)piVar2[1];
        piVar2[1] = (int)((byte *)piVar2[1] + 1);
      }
      *in_EAX = uVar3;
      if (uVar3 == 0x2e) {
        FUN_0029d580(0x2e);
        *(int *)in_EAX[6] = *(int *)in_EAX[6] + -1;
        piVar2 = (int *)in_EAX[6];
        if (*piVar2 < 0) {
          uVar3 = (*(code *)piVar2[2])(piVar2);
        }
        else {
          uVar3 = (uint)*(byte *)piVar2[1];
          piVar2[1] = (int)((byte *)piVar2[1] + 1);
        }
        *in_EAX = uVar3;
        if (uVar3 == 0x2e) {
          FUN_0029d580(0x2e);
          *(int *)in_EAX[6] = *(int *)in_EAX[6] + -1;
          piVar2 = (int *)in_EAX[6];
          if (-1 < *piVar2) {
            bVar1 = *(byte *)piVar2[1];
            piVar2[1] = (int)((byte *)piVar2[1] + 1);
            *in_EAX = (uint)bVar1;
            return 0x116;
          }
          uVar3 = (*(code *)piVar2[2])(piVar2);
          *in_EAX = uVar3;
          return 0x116;
        }
        return 0x115;
      }
      if (DAT_003b6c30 < 2) {
        uVar3 = (byte)PTR_DAT_003b6c3c[uVar3 * 2] & 4;
      }
      else {
        uVar3 = FUN_002eba73(uVar3,4);
      }
      if (uVar3 == 0) {
        return 0x2e;
      }
      goto LAB_002968b3;
    case 0x30:
    case 0x31:
    case 0x32:
    case 0x33:
    case 0x34:
    case 0x35:
    case 0x36:
    case 0x37:
    case 0x38:
    case 0x39:
      do {
        FUN_0029d580(*in_EAX);
        *(int *)in_EAX[6] = *(int *)in_EAX[6] + -1;
        piVar2 = (int *)in_EAX[6];
        if (*piVar2 < 0) {
          uVar3 = (*(code *)piVar2[2])(piVar2);
        }
        else {
          uVar3 = (uint)*(byte *)piVar2[1];
          piVar2[1] = (int)((byte *)piVar2[1] + 1);
        }
        iVar5 = DAT_003b6c30;
        *in_EAX = uVar3;
        if (iVar5 < 2) {
          uVar3 = (byte)PTR_DAT_003b6c3c[uVar3 * 2] & 4;
        }
        else {
          uVar3 = FUN_002eba73(uVar3,4);
        }
      } while (uVar3 != 0);
      if (*in_EAX == 0x2e) {
        FUN_0029d580(0x2e);
        *(int *)in_EAX[6] = *(int *)in_EAX[6] + -1;
        piVar2 = (int *)in_EAX[6];
        if (*piVar2 < 0) {
          uVar3 = (*(code *)piVar2[2])(piVar2);
        }
        else {
          uVar3 = (uint)*(byte *)piVar2[1];
          piVar2[1] = (int)((byte *)piVar2[1] + 1);
        }
        *in_EAX = uVar3;
        if (uVar3 == 0x2e) {
          FUN_0029d580(0x2e);
          FUN_00295910();
        }
      }
LAB_002968b3:
      while( true ) {
        if (DAT_003b6c30 < 2) {
          uVar3 = (byte)PTR_DAT_003b6c3c[*in_EAX * 2] & 4;
        }
        else {
          uVar3 = FUN_002eba73(*in_EAX,4);
        }
        if (uVar3 == 0) break;
        FUN_0029d580(*in_EAX);
        *(int *)in_EAX[6] = *(int *)in_EAX[6] + -1;
        piVar2 = (int *)in_EAX[6];
        if (*piVar2 < 0) {
          uVar3 = (*(code *)piVar2[2])(piVar2);
          *in_EAX = uVar3;
        }
        else {
          bVar1 = *(byte *)piVar2[1];
          piVar2[1] = (int)((byte *)piVar2[1] + 1);
          *in_EAX = (uint)bVar1;
        }
      }
      iVar5 = FUN_002ebaeb(*in_EAX);
      if (iVar5 == 0x45) {
        FUN_0029d580(*in_EAX);
        *(int *)in_EAX[6] = *(int *)in_EAX[6] + -1;
        piVar2 = (int *)in_EAX[6];
        if (*piVar2 < 0) {
          uVar3 = (*(code *)piVar2[2])(piVar2);
          *in_EAX = uVar3;
        }
        else {
          uVar3 = (uint)*(byte *)piVar2[1];
          piVar2[1] = (int)((byte *)piVar2[1] + 1);
          *in_EAX = uVar3;
        }
        while( true ) {
          FUN_0029d580(uVar3);
          *(int *)in_EAX[6] = *(int *)in_EAX[6] + -1;
          piVar2 = (int *)in_EAX[6];
          if (*piVar2 < 0) {
            uVar3 = (*(code *)piVar2[2])(piVar2);
          }
          else {
            uVar3 = (uint)*(byte *)piVar2[1];
            piVar2[1] = (int)((byte *)piVar2[1] + 1);
          }
          *in_EAX = uVar3;
          if (DAT_003b6c30 < 2) {
            uVar3 = (byte)PTR_DAT_003b6c3c[*in_EAX * 2] & 4;
          }
          else {
            uVar3 = FUN_002eba73(*in_EAX,4);
          }
          if (uVar3 == 0) break;
          uVar3 = *in_EAX;
        }
      }
      FUN_0029d580(0);
      fVar8 = (float10)FUN_00295660();
      *(double *)(in_EAX + 4) = (double)fVar8;
      if (fVar8 < (float10)0.0) {
        FUN_00295910();
      }
      return 0x11b;
    case 0x3c:
      FUN_0029d580(*in_EAX);
      *(int *)in_EAX[6] = *(int *)in_EAX[6] + -1;
      piVar2 = (int *)in_EAX[6];
      if (*piVar2 < 0) {
        uVar3 = (*(code *)piVar2[2])(piVar2);
      }
      else {
        uVar3 = (uint)*(byte *)piVar2[1];
        piVar2[1] = (int)((byte *)piVar2[1] + 1);
      }
      *in_EAX = uVar3;
      if (uVar3 != 0x3d) {
        return 0x3c;
      }
      FUN_0029d580(0x3d);
      *(int *)in_EAX[6] = *(int *)in_EAX[6] + -1;
      piVar2 = (int *)in_EAX[6];
      if (-1 < *piVar2) {
        bVar1 = *(byte *)piVar2[1];
        piVar2[1] = (int)((byte *)piVar2[1] + 1);
        *in_EAX = (uint)bVar1;
        return 0x119;
      }
      uVar3 = (*(code *)piVar2[2])(piVar2);
      *in_EAX = uVar3;
      return 0x119;
    case 0x3d:
      FUN_0029d580(*in_EAX);
      *(int *)in_EAX[6] = *(int *)in_EAX[6] + -1;
      piVar2 = (int *)in_EAX[6];
      if (*piVar2 < 0) {
        uVar3 = (*(code *)piVar2[2])(piVar2);
      }
      else {
        uVar3 = (uint)*(byte *)piVar2[1];
        piVar2[1] = (int)((byte *)piVar2[1] + 1);
      }
      *in_EAX = uVar3;
      if (uVar3 != 0x3d) {
        return 0x3d;
      }
      FUN_0029d580(0x3d);
      *(int *)in_EAX[6] = *(int *)in_EAX[6] + -1;
      piVar2 = (int *)in_EAX[6];
      if (-1 < *piVar2) {
        bVar1 = *(byte *)piVar2[1];
        piVar2[1] = (int)((byte *)piVar2[1] + 1);
        *in_EAX = (uint)bVar1;
        return 0x117;
      }
      uVar3 = (*(code *)piVar2[2])(piVar2);
      *in_EAX = uVar3;
      return 0x117;
    case 0x3e:
      FUN_0029d580(*in_EAX);
      *(int *)in_EAX[6] = *(int *)in_EAX[6] + -1;
      piVar2 = (int *)in_EAX[6];
      if (*piVar2 < 0) {
        uVar3 = (*(code *)piVar2[2])(piVar2);
      }
      else {
        uVar3 = (uint)*(byte *)piVar2[1];
        piVar2[1] = (int)((byte *)piVar2[1] + 1);
      }
      *in_EAX = uVar3;
      if (uVar3 != 0x3d) {
        return 0x3e;
      }
      FUN_0029d580(0x3d);
      *(int *)in_EAX[6] = *(int *)in_EAX[6] + -1;
      piVar2 = (int *)in_EAX[6];
      if (-1 < *piVar2) {
        bVar1 = *(byte *)piVar2[1];
        piVar2[1] = (int)((byte *)piVar2[1] + 1);
        *in_EAX = (uint)bVar1;
        return 0x118;
      }
      uVar3 = (*(code *)piVar2[2])(piVar2);
      *in_EAX = uVar3;
      return 0x118;
    case 0x5b:
      FUN_0029d580(*in_EAX);
      *(int *)in_EAX[6] = *(int *)in_EAX[6] + -1;
      piVar2 = (int *)in_EAX[6];
      if (*piVar2 < 0) {
        uVar3 = (*(code *)piVar2[2])(piVar2);
      }
      else {
        uVar3 = (uint)*(byte *)piVar2[1];
        piVar2[1] = (int)((byte *)piVar2[1] + 1);
      }
      *in_EAX = uVar3;
      if (uVar3 != 0x5b) {
        return 0x5b;
      }
      FUN_0029d580(0x5b);
      *(int *)in_EAX[6] = *(int *)in_EAX[6] + -1;
      piVar2 = (int *)in_EAX[6];
      if (-1 < *piVar2) {
        bVar1 = *(byte *)piVar2[1];
        piVar2[1] = (int)((byte *)piVar2[1] + 1);
        *in_EAX = (uint)bVar1;
        uVar3 = FUN_00295ed0();
        return uVar3;
      }
      uVar3 = (*(code *)piVar2[2])(piVar2);
      *in_EAX = uVar3;
      uVar3 = FUN_00295ed0();
      return uVar3;
    case 0x7e:
      FUN_0029d580(*in_EAX);
      *(int *)in_EAX[6] = *(int *)in_EAX[6] + -1;
      piVar2 = (int *)in_EAX[6];
      if (*piVar2 < 0) {
        uVar3 = (*(code *)piVar2[2])(piVar2);
      }
      else {
        uVar3 = (uint)*(byte *)piVar2[1];
        piVar2[1] = (int)((byte *)piVar2[1] + 1);
      }
      *in_EAX = uVar3;
      if (uVar3 != 0x3d) {
        return 0x7e;
      }
      FUN_0029d580(0x3d);
      *(int *)in_EAX[6] = *(int *)in_EAX[6] + -1;
      piVar2 = (int *)in_EAX[6];
      if (-1 < *piVar2) {
        bVar1 = *(byte *)piVar2[1];
        piVar2[1] = (int)((byte *)piVar2[1] + 1);
        *in_EAX = (uint)bVar1;
        return 0x11a;
      }
      uVar3 = (*(code *)piVar2[2])(piVar2);
      *in_EAX = uVar3;
      return 0x11a;
    case 0xffffffff:
      if (0 < (int)in_EAX[8]) {
        FUN_0029d580(0);
        pcVar7 = (char *)(*(int *)(DAT_00469888 + 0x20) + *(int *)(DAT_00469888 + 0x1c));
        FUN_002953d0();
        if (*pcVar7 == '\0') {
          pcVar7 = s_<eof>_00404598;
        }
        FUN_00295370(s___100s__last_token_read_____50s__00404560,s_input_ends_inside_a__if_004044fc,
                     pcVar7,in_EAX[7],local_54);
      }
      return 0x11d;
    }
    uVar3 = *in_EAX;
  } while( true );
joined_r0x00296515:
  if (uVar6 == uVar3) {
    FUN_0029d580(*in_EAX);
    *(int *)in_EAX[6] = *(int *)in_EAX[6] + -1;
    piVar2 = (int *)in_EAX[6];
    if (*piVar2 < 0) {
      uVar3 = (*(code *)piVar2[2])(piVar2);
    }
    else {
      uVar3 = (uint)*(byte *)piVar2[1];
      piVar2[1] = (int)((byte *)piVar2[1] + 1);
    }
    *in_EAX = uVar3;
    uVar3 = FUN_002947d0();
    in_EAX[4] = uVar3;
    return 0x11c;
  }
  uVar6 = *in_EAX;
  if ((uVar6 == 0xffffffff) || (uVar6 == 10)) {
    FUN_00295910();
    return 0x11d;
  }
  if (uVar6 != 0x5c) goto LAB_0029658e;
  *(int *)in_EAX[6] = *(int *)in_EAX[6] + -1;
  piVar2 = (int *)in_EAX[6];
  if (*piVar2 < 0) {
    uVar6 = (*(code *)piVar2[2])(piVar2);
  }
  else {
    uVar6 = (uint)*(byte *)piVar2[1];
    piVar2[1] = (int)((byte *)piVar2[1] + 1);
  }
  *in_EAX = uVar6;
  switch(uVar6) {
  case 10:
    FUN_0029d580(10);
    FUN_00295c60();
    goto LAB_00296689;
  default:
    if (DAT_003b6c30 < 2) {
      uVar6 = (byte)PTR_DAT_003b6c3c[uVar6 * 2] & 4;
    }
    else {
      uVar6 = FUN_002eba73(uVar6,4);
    }
    if (uVar6 == 0) {
      uVar6 = *in_EAX;
      break;
    }
    uVar6 = 0;
    iVar5 = 0;
    do {
      uVar6 = (*in_EAX - 0x30) + uVar6 * 10;
      *(int *)in_EAX[6] = *(int *)in_EAX[6] + -1;
      piVar2 = (int *)in_EAX[6];
      if (*piVar2 < 0) {
        uVar4 = (*(code *)piVar2[2])(piVar2);
      }
      else {
        uVar4 = (uint)*(byte *)piVar2[1];
        piVar2[1] = (int)((byte *)piVar2[1] + 1);
      }
      iVar5 = iVar5 + 1;
      *in_EAX = uVar4;
      if (2 < iVar5) break;
      if (DAT_003b6c30 < 2) {
        uVar4 = (byte)PTR_DAT_003b6c3c[uVar4 * 2] & 4;
      }
      else {
        uVar4 = FUN_002eba73(uVar4,4);
      }
    } while (uVar4 != 0);
    if (uVar6 != (uVar6 & 0xff)) {
      FUN_00295910();
    }
    FUN_0029d580(uVar6);
    goto LAB_00296689;
  case 0x61:
    uVar6 = 7;
    break;
  case 0x62:
    uVar6 = 8;
    break;
  case 0x66:
    uVar6 = 0xc;
    break;
  case 0x6e:
    uVar6 = 10;
    break;
  case 0x72:
    uVar6 = 0xd;
    break;
  case 0x74:
    uVar6 = 9;
    break;
  case 0x76:
    uVar6 = 0xb;
  }
LAB_0029658e:
  FUN_0029d580(uVar6);
  *(int *)in_EAX[6] = *(int *)in_EAX[6] + -1;
  piVar2 = (int *)in_EAX[6];
  if (*piVar2 < 0) {
    uVar6 = (*(code *)piVar2[2])(piVar2);
  }
  else {
    uVar6 = (uint)*(byte *)piVar2[1];
    piVar2[1] = (int)((byte *)piVar2[1] + 1);
  }
  *in_EAX = uVar6;
LAB_00296689:
  uVar6 = *in_EAX;
  goto joined_r0x00296515;
}
