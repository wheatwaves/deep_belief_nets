#ifndef __network_h__
#define __network_h__

#include "connection.h"
#include "dataset.h"
#include "layer.h"

class Network {
public:
  Network();
  ~Network();
  void train(Dataset *training_data);

private:
  int m_num_layers;
  int *m_layer_sizes;
  Layer **m_layers;
  Connection **m_connections;

  void greedily_train_layer(Dataset *training_data, int n);
  void optimize_weights(Dataset *training_data);
};

#endif